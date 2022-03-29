#include <iostream>
#include <ctime>

#define MAX_VALUE 5

using namespace std;

void showElements(int* array, int length);
void InitRandomValues(int* array, int length);
int sumValues(int* array, int length);
int countNoZeroElements(int* array, int length);
double calculateAvgValue(int* array, int length);
bool checkEqualNumb(int* array, int length);
int sumBesideExtremeValues(int* array, int length);
int countBesideExtremeElements(int* array, int length);
double calculateAvgValueBesideExtrVal(int* array, int length);