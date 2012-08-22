/*
  Attempt at making an algorithm that creates valid sudoku games
  Designed and Coded by: James Standeven
  Date: August 21, 2012
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


//Constants
const int ROW = 9;
const int COL = 9;
//const int BOX = 9; 

bool testRow(int array[COL][ROW], int colNum)
{
  bool result = false;

  for(int c = 0; c < ROW; c++)
  {
    int x = 0;
    if(array[colNum][ROW] != array[colNum][ROW + 1]) x++;
    if(x > ROW - 2) result = true;
  }
  return result;
}



void populate(int array[COL][ROW])
{ 
  for(int c = 0; c < COL; c++)
  { 
    for(int x = 0; x < ROW; x++)
    { 
    array[c][x] = 10;
    }
  }
}
  
void show(int array[COL][ROW])
{
  for(int c = 0; c < COL; c++)
  {
    for(int x = 0; x < ROW; x++)
    {
    cout << array[c][x] << " ";
    }
  cout << endl;
  }
}

int main()
{
  srand(time(0));
  //const int NUM[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int boxArray[COL][ROW];
 
  populate(boxArray);
  //show(boxArray);
  
  for(int i = 0; i < COL; i++)
  {
    while(testRow(boxArray, i))
    {
      boxArray[i][0] = rand() % 9 + 1;
    } 
  }
  show(boxArray); 

  return 0;
}

