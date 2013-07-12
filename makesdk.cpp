/*
  Attempt at making an algorithm that creates valid sudoku games
  Designed and Coded by: James Standeven
  Date: August 21, 2012
*/

#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
using namespace std;


//Constants
const int ROW = 9;
const int COL = 9;

void setRow(int array[COL][ROW], int colNum)
{
  for(int r = 0; r < ROW; r++)
  {
    int i = r;

    if(r == 0)
    {
      array[colNum][r] = rand() % 9 + 1;
    }
    else
    {
      array[colNum][r] = rand() % 9 + 1;

      while(i > 0)
      {
        while(array[colNum][r] == array[colNum][r - i])
          array[colNum][r] = rand() % 9 + 1;
        i--;
      }
    }
  }
}

//void setCol(int array[COL][ROW], int rowNum)
//{
//  for(int c = 0; c < COL; c++)
//  {
//    array[rowNum][c] = rand() % 9 + 1;
//  }  
//}

//void populate(int array[COL][ROW])
//{ 
//  for(int c = 0; c < COL; c++)
//  { 
//    for(int r = 0; r < ROW; r++)
//    {
//      array[c][r] = 10;
//    }
//  }
//}
  
void show(int array[COL][ROW])
{
  for(int c = 0; c < COL; c++)
  {
    for(int r = 0; r < ROW; r++)
    {
      cout << setw(2) << array[c][r];
    }
  cout << endl;
  }
}

int main()
{
  srand(time(0));
  int boxArray[COL][ROW];
 
//  populate(boxArray);
  
  for(int i = 0; i < COL; i++)
  {
    setRow(boxArray, i);
  }
  show(boxArray); 

  return 0;
}

