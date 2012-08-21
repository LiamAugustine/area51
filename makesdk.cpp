/*
  Attempt at making an algorithm that creates valid sudoku games
  Designed and Coded by: James Standeven
  Date: August 21, 2012
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int main()
{
  //srand(time(0));
  //const int NUM[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int boxArray[3][3][3];
  //int n = 0;

  for(int c = 0; c < 3; c++)
  {
    //rand() % 9 + 1;
    boxArray[c][0][0] = rand() % 9 + 1;
    cout << boxArray[c][0][0] << endl;
  } 

  return 0;
}

