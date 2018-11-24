#include <stdio.h>
#include <iostream>
#include "Declarations.h"
#include <chrono>
using namespace std;
using Clock=std::chrono::high_resolution_clock;

// Tests Lomuto partitioning with a rightmost pivot on random and sorted inputs 5 times
void    TestQuicksortRtL(int array[], int size)
{
    int* copy = new int[size];
    double average_time = 0;
    cout << "==TESTING QUICKSORT RIGHT LOMUTO==" << endl;
    // copy the original array each iteration and quicksort on the copy
    for (int i = 0; i < 5; i++)
    {
        CopyArray(array, copy, size);
		average_time += TimeIt(QuicksortRtL,copy,size,"RANDOM INPUT: ");
    }
    cout << "Average time for RANDOM INPUT: " << average_time / 5 << endl << endl;
    
    // sort the original array and then test quicksort on it
    //QuicksortRtL(array, 0, size - 1);  //looks like int *copy is already sorted above, so no need to sort this array
	average_time = 0;
    for (int i = 0; i < 5; i++)
    {
		average_time += TimeIt(QuicksortRtL, copy, size, "SORTED INPUT: ");
    }
	cout << "Average time for SORTED INPUT: " << average_time / 5 << endl << endl;

	// Reverse copy, since its already sorted, and test on reverse sorted
	average_time = 0;
	for (int i = 0; i < 5; i++)
	{
		ReverseArray(copy, size);
		average_time += TimeIt(QuicksortRtL, copy, size, "REVERSE SORTED INPUT: ");
	}
	cout << "Average time for REVERSE SORTED INPUT: " << average_time / 5 << endl << endl;

	delete[] copy;
}

// Tests Hoare partitioning with a rightmost pivot on random and sorted inputs 5 times
void    TestQuicksortRtH(int array[], int size)
{
    int* copy = new int[size];
    double average_time = 0;
    cout << "==TESTING QUICKSORT RIGHT HOARE==" << endl;
    // copy the original array each iteration and quicksort on the copy
    for (int i = 0; i < 5; i++)
    {
        CopyArray(array, copy, size);
		average_time += TimeIt(QuicksortRtH, copy, size, "RANDOM INPUT: ");
    }
    cout << "Average time for RANDOM INPUT: " << average_time / 5 << endl << endl;
    
	// sort the original array and then test quicksort on it
	//QuicksortRtH(array, 0, size - 1);
	average_time = 0;
	for (int i = 0; i < 5; i++)
	{
		average_time += TimeIt(QuicksortRtH, copy, size, "SORTED INPUT: ");
	}
	cout << "Average time for SORTED INPUT: " << average_time / 5 << endl << endl;

	// test on reverse sorted
	average_time = 0;
	for (int i = 0; i < 5; i++)
	{
		ReverseArray(copy, size);
		average_time += TimeIt(QuicksortRtH, copy, size, "REVERSE SORTED INPUT: ");
	}
	cout << "Average time for REVERSE SORTED INPUT: " << average_time / 5 << endl << endl;

	delete[] copy;
}

// Tests Lomuto partitioning with a random pivot on random and sorted inputs 5 times
void    TestQuicksortRdL(int array[], int size)
{
    int* copy = new int[size];
    double average_time = 0;
    cout << "==TESTING QUICKSORT RANDOM LOMUTO==" << endl;
    // copy the original array each iteration and quicksort on the copy
    for (int i = 0; i < 5; i++)
    {
        CopyArray(array, copy, size);
		average_time += TimeIt(QuicksortRdL, copy, size, "RANDOM INPUT: ");
    }
    cout << "Average time for RANDOM INPUT: " << average_time / 5 << endl << endl;
    
	// sort the original array and then test quicksort on it
	//QuicksortRdL(array, 0, size - 1);
	average_time = 0;
	for (int i = 0; i < 5; i++)
	{
		average_time += TimeIt(QuicksortRdL, copy, size, "SORTED INPUT: ");
	}
	cout << "Average time for SORTED INPUT: " << average_time / 5 << endl << endl;

	// test on reverse sorted
	average_time = 0;
	for (int i = 0; i < 5; i++)
	{
		ReverseArray(copy, size);
		average_time += TimeIt(QuicksortRdL, copy, size, "REVERSE SORTED INPUT: ");
	}
	cout << "Average time for REVERSE SORTED INPUT: " << average_time / 5 << endl << endl;

	delete[] copy;
}

// Tests Hoare partitioning with a random pivot on random and sorted inputs 5 times
void    TestQuicksortRdH(int array[], int size)
{
    int* copy = new int[size];
    double average_time = 0;
    cout << "==TESTING QUICKSORT RANDOM HOARE==" << endl;
    // copy the original array each iteration and quicksort on the copy
    for (int i = 0; i < 5; i++)
    {
        CopyArray(array, copy, size);
		average_time += TimeIt(QuicksortRdH, copy, size, "RANDOM INPUT: ");
    }
    cout << "Average time for RANDOM INPUT: " << average_time / 5 << endl << endl;
    
    // sort the original array and then test quicksort on it
	//QuicksortRdH(array, 0, size - 1);
	average_time = 0;
	for (int i = 0; i < 5; i++)
	{
		average_time += TimeIt(QuicksortRdH, copy, size, "SORTED INPUT: ");
	}
	cout << "Average time for SORTED INPUT: " << average_time / 5 << endl << endl;

	// test on reverse sorted
	average_time = 0;
	for (int i = 0; i < 5; i++)
	{
		ReverseArray(copy, size);
		average_time += TimeIt(QuicksortRdH, copy, size, "REVERSE SORTED INPUT: ");
	}
	cout << "Average time for REVERSE SORTED INPUT: " << average_time / 5 << endl << endl;

	delete[] copy;
}

// Tests Lomuto partitioning with a median pivot on random and sorted inputs 5 times
void    TestQuicksortMdL(int array[], int size)
{
    int* copy = new int[size];
    double average_time = 0;
    cout << "==TESTING QUICKSORT MEDIAN LOMUTO==" << endl;
    // copy the original array each iteration and quicksort on the copy
    for (int i = 0; i < 5; i++)
    {
        CopyArray(array, copy, size);
		average_time += TimeIt(QuicksortMdL, copy, size, "RANDOM INPUT: ");
    }
    cout << "Average time for RANDOM INPUT: " << average_time / 5 << endl << endl;
    
    // sort the original array and then test quicksort on it
	//QuicksortMdL(array, 0, size - 1);
	average_time = 0;
	for (int i = 0; i < 5; i++)
	{
		average_time += TimeIt(QuicksortMdL, copy, size, "SORTED INPUT: ");
	}
	cout << "Average time for SORTED INPUT: " << average_time / 5 << endl << endl;

	// test on reverse sorted
	average_time = 0;
	for (int i = 0; i < 5; i++)
	{
		ReverseArray(copy, size);
		average_time += TimeIt(QuicksortMdL, copy, size, "REVERSE SORTED INPUT: ");
	}
	cout << "Average time for REVERSE SORTED INPUT: " << average_time / 5 << endl << endl;

	delete[] copy;
}

// Tests Hoare partitioning with a median pivot on random and sorted inputs 5 times
void    TestQuicksortMdH(int array[], int size)
{
    int* copy = new int[size];
    double average_time = 0;
    cout << "==TESTING QUICKSORT MEDIAN HOARE==" << endl;
    // copy the original array each iteration and quicksort on the copy
    for (int i = 0; i < 5; i++)
    {
        CopyArray(array, copy, size);
		average_time += TimeIt(QuicksortMdH, copy, size, "RANDOM INPUT: ");
    }
    cout << "Average time for RANDOM INPUT: " << average_time / 5 << endl << endl;
    
    // sort the original array and then test quicksort on it
	//QuicksortMdH(array, 0, size - 1);
	average_time = 0;
	for (int i = 0; i < 5; i++)
	{
		average_time += TimeIt(QuicksortMdH, copy, size, "SORTED INPUT: ");
	}
	cout << "Average time for SORTED INPUT: " << average_time / 5 << endl << endl;

	// test on revers sorted
	average_time = 0;
	for (int i = 0; i < 5; i++)
	{
		ReverseArray(copy, size);
		average_time += TimeIt(QuicksortMdH, copy, size, "REVERSE SORTED INPUT: ");
	}
	cout << "Average time for REVERSE SORTED INPUT: " << average_time / 5 << endl << endl;

	delete[] copy;
}

// Copies an array for the testing functions
void CopyArray(int src[], int copy[], int size)
{
    for (int i = 0; i < size; i++)
    {
        copy[i] = src[i];
    }
}

// Reverses an array
void ReverseArray(int src[], int size)
{
	int temp;
	int swaps = size / 2;
	--size;
	for (int i = 0; i < swaps; ++i, --size)
	{
		temp = src[size];
		src[size] = src[i];
		src[i] = temp;
	}
}

// Time the quicksort
double TimeIt(void(*qsort)(int*, int, int), int* copy, int size, const char* type)
{
	auto start = Clock::now();
	(*qsort)(copy, 0, size - 1);
	auto end = Clock::now();
	chrono::duration<double> diff = end - start;
	cout << type << diff.count() << endl;
	return diff.count();
}