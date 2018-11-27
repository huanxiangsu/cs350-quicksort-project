// Declare all functions for use in project here.

#ifndef DECLARATIONS_H
#define DECLARATIONS_H

int        Lomuto(int array[], int left, int right);
int        Hoare(int array[], int left, int right);

void    QuicksortRtL(int array[], int left, int right);
void    QuicksortRtH(int array[], int left, int right);
void    QuicksortRdL(int array[], int left, int right);
void    QuicksortRdH(int array[], int left, int right);
void    QuicksortMdL(int array[], int left, int right);
void    QuicksortMdH(int array[], int left, int right);

void    TestQuicksortRtL(int array[], int size, int num1, int num2, int num3);
void    TestQuicksortRtH(int array[], int size, int num1, int num2, int num3);
void    TestQuicksortRdL(int array[], int size, int num1, int num2, int num3);
void    TestQuicksortRdH(int array[], int size, int num1, int num2, int num3);
void    TestQuicksortMdL(int array[], int size, int num1, int num2, int num3);
void    TestQuicksortMdH(int array[], int size, int num1, int num2, int num3);

void CopyArray(int src[], int copy[], int size);
void ReverseArray(int src[], int size);
double TimeIt(void(*qsort)(int*, int, int), int* copy, int size, const char* type);

void output_array(int array[], int size);
int compare(const void * a, const void * b);  // for library qsort
int test_qsort(int array[], int size, int type);
void test_result(int array[], int size);  // test if the array is actually sorted.
void test_correctness(int src[], int array[], int size);

#endif
