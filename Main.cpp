#include "Declarations.h"
#include <iostream>
#include <cstdlib>
#include <chrono>
#include <stdlib.h>
#include <time.h>
using namespace std;
using Clock=std::chrono::high_resolution_clock;


// to output the array
void output_array(int array[], int size){
    for(int i = 0; i < size; ++i)
        cout << array[i] << "\t";
    cout << endl << endl;
}


int main(int argc, char *argv[])
{
	cout << fixed;
	cout.precision(10);
/*
    srand((unsigned int)time(NULL));
	int size = 10000;
	int* array = new int[size];
    for(int i = 0; i < size; ++i)
    {
        array[i] = rand() % 100;
    }
    TestQuicksortRdH(array, size);
	delete[] array;
*/

    srand((unsigned int)time(NULL));
    int size;
    // we can enter different input size from the terminal command line
    if(argv[1])
        size = atoi(argv[1]);
    else
        size = 10000;
    cout << "Input size is " << size << endl << endl;
    
    int* array = new int[size];
    for(int i = 0; i < size; ++i)
    {
        array[i] = rand() % 1000;
    }
    
    test_qsort(array, size, 1);  // random input
    test_qsort(array, size, 2);  // sorted input
    test_qsort(array, size, 3);  // reversed sorted input
    cout << endl;
    
    //output_array(array, size);
    TestQuicksortRtL(array, size);  // right
    TestQuicksortRtH(array, size);
    TestQuicksortRdL(array, size);  // random
    TestQuicksortRdH(array, size);
    TestQuicksortMdL(array, size);  // median
    TestQuicksortMdH(array, size);
    //output_array(array, size);
    delete[] array;
    
    
    return 0;
}
