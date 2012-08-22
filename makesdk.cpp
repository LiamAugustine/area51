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
const int ROW = 3;
const int COL = 3;
const int BOX = 9; 

void populate(int array[BOX][ROW][COL])
{ 
  for(int c = 0; c < BOX; c++)
  { 
    for(int x = 0; x < ROW; x++)
    { 
      for(int y = 0; y < COL; y++)
      { 
        array[c][x][y] = 10;
      }
    }
  }
}
  
void show(int array[BOX][ROW][COL])
{
  for(int c = 0; c < BOX; c++)
  {
    for(int x = 0; x < ROW; x++)
    {
      for(int y = 0; y < COL; y++)
      {
        cout << array[c][x][y] << " ";
      }
    cout << endl;
    }
  cout << endl;
  }
}

int main()
{
  srand(time(0));
  //const int NUM[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int boxArray[BOX][ROW][COL];
 
  populate(boxArray);
  show(boxArray);

  int i = 0;
  while((boxArray[i][0][0] = boxArray[i+1][0][0]) && (boxArray[i][0][0] = boxArray[i+2][0][0]))
  {
    boxArray[i][0][0] = rand() % 9 + 1;
    if((boxArray[i][0][0] != boxArray[i+1][0][0]) && (boxArray[i][0][0] != boxArray[i+2][0][0])) 
      i += 1;
  }

  show(boxArray); 

  return 0;
}

