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
        auto start = Clock::now();
        QuicksortRtL(copy, 0, size - 1);
        auto end = Clock::now();
        chrono::duration<double> diff = end - start;
        cout << "RANDOM INPUT: " << diff.count() << endl;
        average_time += diff.count();
    }
    cout << "Average time for RAMDOM INPUT: " << average_time / 5 << endl << endl;
    average_time = 0;
    
    // sort the original array and then test quicksort on it
    //QuicksortRtL(array, 0, size - 1);  //looks like int *copy is already sorted above, so no need to sort this array
    for (int i = 0; i < 5; i++)
    {
        auto start = Clock::now();
        QuicksortRtL(copy, 0, size - 1);
        auto end = Clock::now();
        chrono::duration<double> diff = end - start;
        cout << "SORTED INPUT: " << diff.count() << endl;
        average_time += diff.count();
    }
	delete[] copy;
    cout << "Average time for SORTED INPUT: " << average_time / 5 << endl << endl;
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
        auto start = Clock::now();
        QuicksortRtH(copy, 0, size - 1);
        auto end = Clock::now();
        chrono::duration<double> diff = end - start;
        cout << "RANDOM INPUT: " << diff.count() << endl;
        average_time += diff.count();
    }
    cout << "Average time for RAMDOM INPUT: " << average_time / 5 << endl << endl;
    average_time = 0;
    
    // sort the original array and then test quicksort on it
    //QuicksortRtH(array, 0, size - 1);
    for (int i = 0; i < 5; i++)
    {
        auto start = Clock::now();
        QuicksortRtH(copy, 0, size - 1);
        auto end = Clock::now();
        chrono::duration<double> diff = end - start;
        cout << "SORTED INPUT: " << diff.count() << endl;
        average_time += diff.count();
    }
	delete[] copy;
    cout << "Average time for SORTED INPUT: " << average_time / 5 << endl << endl;
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
        auto start = Clock::now();
        QuicksortRdL(copy, 0, size - 1);
        auto end = Clock::now();
        chrono::duration<double> diff = end - start;
        cout << "RANDOM INPUT: " << diff.count() << endl;
        average_time += diff.count();
    }
    cout << "Average time for RAMDOM INPUT: " << average_time / 5 << endl << endl;
    average_time = 0;
    
    // sort the original array and then test quicksort on it
    //QuicksortRdL(array, 0, size - 1);
    for (int i = 0; i < 5; i++)
    {
        auto start = Clock::now();
        QuicksortRdL(copy, 0, size - 1);
        auto end = Clock::now();
        chrono::duration<double> diff = end - start;
        cout << "SORTED INPUT: " << diff.count() << endl;
        average_time += diff.count();
    }
	delete[] copy;
    cout << "Average time for SORTED INPUT: " << average_time / 5 << endl << endl;
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
        auto start = Clock::now();
        QuicksortRdH(copy, 0, size - 1);
        auto end = Clock::now();
        chrono::duration<double> diff = end - start;
        cout << "RANDOM INPUT: " << diff.count() << endl;
        average_time += diff.count();
    }
    cout << "Average time for RAMDOM INPUT: " << average_time / 5 << endl << endl;
    average_time = 0;
    
    // sort the original array and then test quicksort on it
    //QuicksortRdH(array, 0, size - 1);
    for (int i = 0; i < 5; i++)
    {
        auto start = Clock::now();
        QuicksortRdH(copy, 0, size - 1);
        auto end = Clock::now();
        chrono::duration<double> diff = end - start;
        cout << "SORTED INPUT: " << diff.count() << endl;
        average_time += diff.count();
    }
	delete[] copy;
    cout << "Average time for SORTED INPUT: " << average_time / 5 << endl << endl;
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
        auto start = Clock::now();
        QuicksortMdL(copy, 0, size - 1);
        auto end = Clock::now();
        chrono::duration<double> diff = end - start;
        cout << "RANDOM INPUT: " << diff.count() << endl;
        average_time += diff.count();
    }
    cout << "Average time for RAMDOM INPUT: " << average_time / 5 << endl << endl;
    average_time = 0;
    
    // sort the original array and then test quicksort on it
    //QuicksortMdL(array, 0, size - 1);
    for (int i = 0; i < 5; i++)
    {
        auto start = Clock::now();
        QuicksortMdL(copy, 0, size - 1);
        auto end = Clock::now();
        chrono::duration<double> diff = end - start;
        cout << "SORTED INPUT: " << diff.count() << endl;
        average_time += diff.count();
    }
	delete[] copy;
    cout << "Average time for SORTED INPUT: " << average_time / 5 << endl << endl;
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
        auto start = Clock::now();
        QuicksortMdH(copy, 0, size - 1);
        auto end = Clock::now();
        chrono::duration<double> diff = end - start;
        cout << "RANDOM INPUT: " << diff.count() << endl;
        average_time += diff.count();
    }
    cout << "Average time for RAMDOM INPUT: " << average_time / 5 << endl << endl;
    average_time = 0;
    
    // sort the original array and then test quicksort on it
    //QuicksortMdH(array, 0, size - 1);
    for (int i = 0; i < 5; i++)
    {
        auto start = Clock::now();
        QuicksortMdH(copy, 0, size - 1);
        auto end = Clock::now();
        chrono::duration<double> diff = end - start;
        cout << "SORTED INPUT: " << diff.count() << endl;
        average_time += diff.count();
    }
	delete[] copy;
    cout << "Average time for SORTED INPUT: " << average_time / 5 << endl << endl;
}

// Copies an array for the testing functions
void CopyArray(int src[], int copy[], int size)
{
    for (int i = 0; i < size; i++)
    {
        copy[i] = src[i];
    }
}
