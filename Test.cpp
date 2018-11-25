#include <stdio.h>
#include <iostream>
#include "Declarations.h"
#include <chrono>
using namespace std;
using Clock=std::chrono::high_resolution_clock;

// Tests Lomuto partitioning with a rightmost pivot on random and sorted inputs 5 times
void    TestQuicksortRtL(int array[], int size, int num)
{
    int* copy = new int[size];
    double average_time = 0;
    cout << "==TESTING QUICKSORT RIGHT LOMUTO==" << endl;
    // copy the original array each iteration and quicksort on the copy
    for (int i = 0; i < num; i++)
    {
        CopyArray(array, copy, size);
		average_time += TimeIt(QuicksortRtL,copy,size,"RANDOM INPUT: ");
		//test_result(copy, size);
		//test_correctness(array, copy, size);
    }
    cout << "Average time for RANDOM INPUT: " << average_time / num << endl << endl;
    
    // sort the original array and then test quicksort on it
    //QuicksortRtL(array, 0, size - 1);  //looks like int *copy is already sorted above, so no need to sort this array
	average_time = 0;
    for (int i = 0; i < num; i++)
    {
		average_time += TimeIt(QuicksortRtL, copy, size, "SORTED INPUT: ");
		//test_result(copy, size);
		//test_correctness(array, copy, size);
    }
	cout << "Average time for SORTED INPUT: " << average_time / num << endl << endl;

	// Reverse copy, since its already sorted, and test on reverse sorted
	average_time = 0;
	for (int i = 0; i < num; i++)
	{
		ReverseArray(copy, size);
		average_time += TimeIt(QuicksortRtL, copy, size, "REVERSE SORTED INPUT: ");
		//test_result(copy, size);
		//test_correctness(array, copy, size);
	}
	cout << "Average time for REVERSE SORTED INPUT: " << average_time / num << endl << endl;

	delete[] copy;
}

// Tests Hoare partitioning with a rightmost pivot on random and sorted inputs 5 times
void    TestQuicksortRtH(int array[], int size, int num)
{
    int* copy = new int[size];
    double average_time = 0;
    cout << "==TESTING QUICKSORT RIGHT HOARE==" << endl;
    // copy the original array each iteration and quicksort on the copy
    for (int i = 0; i < num; i++)
    {
        CopyArray(array, copy, size);
		average_time += TimeIt(QuicksortRtH, copy, size, "RANDOM INPUT: ");
		//test_result(copy, size);
		//test_correctness(array, copy, size);
    }
    cout << "Average time for RANDOM INPUT: " << average_time / num << endl << endl;
    
	// sort the original array and then test quicksort on it
	//QuicksortRtH(array, 0, size - 1);
	average_time = 0;
	for (int i = 0; i < num; i++)
	{
		average_time += TimeIt(QuicksortRtH, copy, size, "SORTED INPUT: ");
		//test_result(copy, size);
		//test_correctness(array, copy, size);
	}
	cout << "Average time for SORTED INPUT: " << average_time / num << endl << endl;

	// test on reverse sorted
	average_time = 0;
	for (int i = 0; i < num; i++)
	{
		ReverseArray(copy, size);
		average_time += TimeIt(QuicksortRtH, copy, size, "REVERSE SORTED INPUT: ");
		//test_result(copy, size);
		//test_correctness(array, copy, size);
	}
	cout << "Average time for REVERSE SORTED INPUT: " << average_time / num << endl << endl;

	delete[] copy;
}

// Tests Lomuto partitioning with a random pivot on random and sorted inputs 5 times
void    TestQuicksortRdL(int array[], int size, int num)
{
    int* copy = new int[size];
    double average_time = 0;
    cout << "==TESTING QUICKSORT RANDOM LOMUTO==" << endl;
    // copy the original array each iteration and quicksort on the copy
    for (int i = 0; i < num; i++)
    {
        CopyArray(array, copy, size);
		average_time += TimeIt(QuicksortRdL, copy, size, "RANDOM INPUT: ");
		//test_result(copy, size);
		//test_correctness(array, copy, size);
    }
    cout << "Average time for RANDOM INPUT: " << average_time / num << endl << endl;
    
	// sort the original array and then test quicksort on it
	//QuicksortRdL(array, 0, size - 1);
	average_time = 0;
	for (int i = 0; i < num; i++)
	{
		average_time += TimeIt(QuicksortRdL, copy, size, "SORTED INPUT: ");
		//test_result(copy, size);
		//test_correctness(array, copy, size);
	}
	cout << "Average time for SORTED INPUT: " << average_time / num << endl << endl;

	// test on reverse sorted
	average_time = 0;
	for (int i = 0; i < num; i++)
	{
		ReverseArray(copy, size);
		average_time += TimeIt(QuicksortRdL, copy, size, "REVERSE SORTED INPUT: ");
		//test_result(copy, size);
		//test_correctness(array, copy, size);
	}
	cout << "Average time for REVERSE SORTED INPUT: " << average_time / num << endl << endl;

	delete[] copy;
}

// Tests Hoare partitioning with a random pivot on random and sorted inputs 5 times
void    TestQuicksortRdH(int array[], int size, int num)
{
    int* copy = new int[size];
    double average_time = 0;
    cout << "==TESTING QUICKSORT RANDOM HOARE==" << endl;
    // copy the original array each iteration and quicksort on the copy
    for (int i = 0; i < num; i++)
    {
        CopyArray(array, copy, size);
		average_time += TimeIt(QuicksortRdH, copy, size, "RANDOM INPUT: ");
		//test_result(copy, size);
		//test_correctness(array, copy, size);
    }
    cout << "Average time for RANDOM INPUT: " << average_time / num << endl << endl;
    
    // sort the original array and then test quicksort on it
	//QuicksortRdH(array, 0, size - 1);
	average_time = 0;
	for (int i = 0; i < num; i++)
	{
		average_time += TimeIt(QuicksortRdH, copy, size, "SORTED INPUT: ");
		//test_result(copy, size);
		//test_correctness(array, copy, size);
	}
	cout << "Average time for SORTED INPUT: " << average_time / num << endl << endl;

	// test on reverse sorted
	average_time = 0;
	for (int i = 0; i < num; i++)
	{
		ReverseArray(copy, size);
		average_time += TimeIt(QuicksortRdH, copy, size, "REVERSE SORTED INPUT: ");
		//test_result(copy, size);
		//test_correctness(array, copy, size);
	}
	cout << "Average time for REVERSE SORTED INPUT: " << average_time / num << endl << endl;

	delete[] copy;
}

// Tests Lomuto partitioning with a median pivot on random and sorted inputs 5 times
void    TestQuicksortMdL(int array[], int size, int num)
{
    int* copy = new int[size];
    double average_time = 0;
    cout << "==TESTING QUICKSORT MEDIAN LOMUTO==" << endl;
    // copy the original array each iteration and quicksort on the copy
    for (int i = 0; i < num; i++)
    {
        CopyArray(array, copy, size);
		average_time += TimeIt(QuicksortMdL, copy, size, "RANDOM INPUT: ");
		//test_result(copy, size);
		//test_correctness(array, copy, size);
    }
    cout << "Average time for RANDOM INPUT: " << average_time / num << endl << endl;
    
    // sort the original array and then test quicksort on it
	//QuicksortMdL(array, 0, size - 1);
	average_time = 0;
	for (int i = 0; i < num; i++)
	{
		average_time += TimeIt(QuicksortMdL, copy, size, "SORTED INPUT: ");
		//test_result(copy, size);
		//test_correctness(array, copy, size);
	}
	cout << "Average time for SORTED INPUT: " << average_time / num << endl << endl;

	// test on reverse sorted
	average_time = 0;
	for (int i = 0; i < num; i++)
	{
		ReverseArray(copy, size);
		average_time += TimeIt(QuicksortMdL, copy, size, "REVERSE SORTED INPUT: ");
		//test_result(copy, size);
		//test_correctness(array, copy, size);
	}
	cout << "Average time for REVERSE SORTED INPUT: " << average_time / num << endl << endl;

	delete[] copy;
}

// Tests Hoare partitioning with a median pivot on random and sorted inputs 5 times
void    TestQuicksortMdH(int array[], int size, int num)
{
    int* copy = new int[size];
    double average_time = 0;
    cout << "==TESTING QUICKSORT MEDIAN HOARE==" << endl;
    // copy the original array each iteration and quicksort on the copy
    for (int i = 0; i < num; i++)
    {
        CopyArray(array, copy, size);
		average_time += TimeIt(QuicksortMdH, copy, size, "RANDOM INPUT: ");
		test_result(copy, size);
		test_correctness(array, copy, size);
    }
    cout << "Average time for RANDOM INPUT: " << average_time / num << endl << endl;
    
    // sort the original array and then test quicksort on it
	//QuicksortMdH(array, 0, size - 1);
	average_time = 0;
	for (int i = 0; i < num; i++)
	{
		average_time += TimeIt(QuicksortMdH, copy, size, "SORTED INPUT: ");
		test_result(copy, size);
		test_correctness(array, copy, size);
	}
	cout << "Average time for SORTED INPUT: " << average_time / num << endl << endl;

	// test on revers sorted
	average_time = 0;
	for (int i = 0; i < num; i++)
	{
		ReverseArray(copy, size);
		average_time += TimeIt(QuicksortMdH, copy, size, "REVERSE SORTED INPUT: ");
		test_result(copy, size);
		test_correctness(array, copy, size);
	}
	cout << "Average time for REVERSE SORTED INPUT: " << average_time / num << endl << endl;

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


// compare function used in the library quicksort
int compare(const void * a, const void * b){
    return ( *(int*)a - *(int*)b);
}


// function to record the time for the library quicksort.
// type == 1 : Random input
// type == 2 : Sorted input
// type == 3 : Reversed Sorted input
int test_qsort(int array[], int size, int type)
{
    //int copy[size];
    int* copy = new int[size];
    CopyArray(array, copy, size);
    
    if(type == 1)
    {
        auto start = Clock::now();
        qsort(copy, size, sizeof(int), compare);
        auto end = Clock::now();
        chrono::duration<double> diff = end - start;
        cout << "RANDOM INPUT in library qsort: " << diff.count() << endl;
		delete[] copy;
        return diff.count();
    }
    else if(type == 2)
    {
        qsort(copy, size, sizeof(int), compare);  // sorted the array first
        auto start = Clock::now();
        qsort(copy, size, sizeof(int), compare);
        auto end = Clock::now();
        chrono::duration<double> diff = end - start;
        cout << "SORTED INPUT in library qsort: " << diff.count() << endl;
		delete[] copy;
        return diff.count();
    }
    else
    {
        qsort(copy, size, sizeof(int), compare);  // sorted the array first
        ReverseArray(copy, size);  // then reserve it
        auto start = Clock::now();
        qsort(copy, size, sizeof(int), compare);
        auto end = Clock::now();
        chrono::duration<double> diff = end - start;
        cout << "REVERSE SORTED INPUT in library qsort: " << diff.count() << endl;
		delete[] copy;
        return diff.count();
    }
}

// test if array is actually sorted.
void test_result(int array[], int size)
{
    for(int i = 1; i < size; ++i)
    {
        if(array[i] < array[i - 1])
		{
            cout << "Test Sorted: FAILED" << endl;
			return;
		}
    }
    cout << "Test Sorted: PASSED" << endl;
}

// to check if two arrays have the same value and same ordering.
void test_correctness(int src[], int array[], int size)
{
    int failed = false;
    int *source = new int[size];
    CopyArray(src, source, size);  // copy to avoid change the original array
    qsort(source, size, sizeof(int), compare); // sort original array using library quicksort
    for(int i = 0; i < size; ++i)
    {
        if(source[i] != array[i])  // compare value and ordering, if not match, failed
        {
            failed = true;
            break;
        }
    }
    if(failed == true)
        cout << "Test Data Correctness: FAILED" << endl;
    cout << "Test Data Correctness: PASSED" << endl;
	delete[] source;
}
