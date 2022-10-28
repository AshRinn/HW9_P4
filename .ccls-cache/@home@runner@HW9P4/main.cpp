/******************************************************************************
 CSCI 130: Matrix Example
*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

// function prototypes
void printMatrix_3col(int matrix[][3], int N_ROWS, int N_COLUMNS);
int CountUnhealthySensitive(int matrix[][3], int N_ROWS, int N_COLUMNS);
int meanAirQualityIndex(int matrix[][3], int N_ROWS, int city_col);
////////////////////// MAIN ///////////////////////////////////////
int main()
{
    const int N_ROWS = 10; 
    const int N_COLUMNS = 3;
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

    // display values in MyMatrix
    cout << "AirQuality_Index contains: " << endl;
    printMatrix_3col(AirQuality_Index, N_ROWS, N_COLUMNS);

    return 0;
}

/////////////// USER-DEFINED MATRIX FUNCTIONS ////////////////////////////
// Recall: you can omit the size of the first dimension, but not the second

// function to print the matrix in a matrix with 3 columns
void printMatrix_3col(int matrix[][3], int N_ROWS, int N_COLUMNS)
{
    int row, col;
    for (row = 0; row < N_ROWS; row++)
    {
        for(col = 0; col < N_COLUMNS; col++)
            cout << setw(6) << matrix[row][col] << " ";
        
        cout << endl;    
    }

  int CountUnhealthySensitive(int matrix[][3], int N_ROWS, int N_COLUMNS)
{
    int row, col;
    for (row = 0; row < N_ROWS; row++)
    {
        for(col = 0; col < N_COLUMNS; col++)
        {
          if( N_COLUMNS >= 50)
            
            
        }    
          cout << setw(6) << matrix[row][col] << " ";
        
        cout << endl;    
    }
  }
}

int meanAirQualityIndex(int matrix[][3], int N_ROWS, int city_col)
{
  int sum= 0;
  int row, avg;

  for (row = 0; row < N_ROWS; row++)
    sum = sum + matrix[row][city_col];
  avg = sum / N_ROWS;

return avg;
}
