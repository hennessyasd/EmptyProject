#include <fstream>
#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int** initNumbersforMatrix(char* fileName, int* n, int* m);
void showMatrix(int** matrix, int n, int m);
int findMaxValueOfMatrix(int** matrix, int n, int m);
int findMinValueOfMatrix(int** matrix, int n, int m);
int culcAvgMinValueOfMatrix(int** matrix, int n, int m);