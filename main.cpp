/******************************************************************************
 CSCI 130: Matrix Example
*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

// function prototypes
void printMatrix_3col(int AirQuality_Index[][3], int N_ROWS, int N_COLUMNS);
int CountUnhealthySensitive(int AirQuality_Index[][3], int N_ROWS, int N_COLUMNS);
int meanAirQualityIndex(int AirQuality_Index[][3], int N_ROWS, int city_col);
////////////////////// MAIN ///////////////////////////////////////
int main()
{
    const int N_ROWS = 10; 
    const int N_COLUMNS = 3;
    int city_col;
    int AirQuality_Index[N_ROWS][N_COLUMNS] = {{50, 68, 58},
                                              {58, 115, 78},
                                              {62, 110, 81},
                                              {66, 124, 110},
                                              {64, 152, 121},  
                                              {46, 143, 90},
                                              {46, 143, 90},
                                              {25, 91, 91},
                                              {27, 19, 59}, 
                                              {17, 13, 27}};

  
   string place[] = {"Grnd Jct.", "Ft Col.", "Den."};
  
  cout << endl << "Air Quality Index" << endl << endl;
  for (int col = 0; col < N_COLUMNS; col++){
    cout << setw(8) << place[col] << " ";
  }
  cout << endl;

  printMatrix_3col(AirQuality_Index, N_ROWS, N_COLUMNS);
cout << endl; 
cout << "From 10/04/2020 to 10/13/2020, air quality was unhealthy for sensitive groups in: "<< endl;

  for (int col = 0; col < N_COLUMNS; col++ ){
    if (col == 0)
      cout << "Grand Junction";
    if (col == 1)
      cout << "Fort Collins";
    if (col == 2)
      cout << "Denver";
   cout << " for "<< CountUnhealthySensitive(AirQuality_Index, N_ROWS, col) << " times."<< endl;
    }
  cout << endl;
  cout<<"From 10/4/2020 to 10/13/2020 the average air quality in: " << endl;
    for (int col = 0; col < N_COLUMNS; col++ ){
    if (col == 0)
      cout << "Grand Junction";
    if (col == 1)
      cout << "Fort Collins";
    if (col == 2)
      cout << "Denver";
    cout << " was " <<meanAirQualityIndex(AirQuality_Index, N_ROWS, col) << "." << endl;
   
    // display values in MyMatrix
   // cout << "AirQuality_Index contains: " << endl;
}
  }

/////////////// USER-DEFINED MATRIX FUNCTIONS ////////////////////////////
// Recall: you can omit the size of the first dimension, but not the second

// 
void printMatrix_3col(int AirQuality_Index[][3], int N_ROWS, int N_COLUMNS)
{
    int row, col;
    for (row = 0; row < N_ROWS; row++)
    {
        for(col = 0; col < N_COLUMNS; col++)
            cout << setw(8) <<AirQuality_Index[row][col] << " ";
        
        cout << endl;    
    }
  }
//unhealthy funtion
  int CountUnhealthySensitive(int AirQuality_Index[][3], int N_ROWS, int N_COLUMNS)
{
    int count = 0;
    int Unhealthy_Level = 101;
    int row; 
    
    for (row = 0; row < N_ROWS; row++)
    {
      if (AirQuality_Index[row][N_COLUMNS] >= Unhealthy_Level)
        count++;
    }
    return count;
}
  
  //air quailty funtion

int meanAirQualityIndex(int matrix[][3], int N_ROWS, int city_col)
{
  int sum= 0;
  int row, avg;

  for (row = 0; row < N_ROWS; row++)
    sum = sum + matrix[row][city_col];
  avg = sum / N_ROWS;

return avg;
}
  
