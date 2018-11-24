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

void    TestQuicksortRtL(int array[], int size);
void    TestQuicksortRtH(int array[], int size);
void    TestQuicksortRdL(int array[], int size);
void    TestQuicksortRdH(int array[], int size);
void    TestQuicksortMdL(int array[], int size);
void    TestQuicksortMdH(int array[], int size);

void CopyArray(int src[], int copy[], int size);
void ReverseArray(int src[], int size);
double TimeIt(void(*qsort)(int*, int, int), int* copy, int size, const char* type);

#endif
