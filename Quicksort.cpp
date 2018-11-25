/*
 * Quicksort algorithm definitions
 * Suffix of Quicksort meaning:
 *     First letter:
 *         Rt = Pivot is right-most element
 *         Md = Pivot is median-of-three
 *         Rd = Pivot is randomly picked
 *     Second Letter:
 *         L = Lomuto partitioning
 *         H = Hoare partitioning
 */

#include "Declarations.h"
#include <cstdlib>
#include <algorithm>
using namespace std;

// Uses right most as pivot
// Uses Lomuto Partitioning
void QuicksortRtL(int array[], int left, int right)
{
    if (left >= right)
        return;
    //random number between left and right
    //swap array[random] with array[right]
    int pivot = Lomuto(array, left, right);
    
    QuicksortRtL(array, left, pivot - 1);
    QuicksortRtL(array, pivot + 1, right);
}

// Uses right most as pivot
// Uses Hoare Partitioning
void QuicksortRtH(int array[], int left, int right)
{
    if (left >= right)
        return;
    
    int pivot = Hoare(array, left, right);
    
    QuicksortRtH(array, left, pivot - 1);
    QuicksortRtH(array, pivot + 1, right);
}

// Uses random as pivot
// Uses Lomuto Partitioning
void QuicksortRdL(int array[], int left, int right)
{
    if (left >= right)
        return;
    //random number between left and right
    int length = right - left + 1;
    int random = rand() % length;
    random = random + left;
    //swap array[random] with array[right]
    int temp = array[random];
    array[random] = array[right];
    array[right] = temp;
    
    int pivot = Lomuto(array, left, right);
    
    QuicksortRdL(array, left, pivot - 1);
    QuicksortRdL(array, pivot + 1, right);
}

// Uses random as pivot
// Uses Hoare Partitioning
void QuicksortRdH(int array[], int left, int right)
{
    if (left >= right)
        return;
    //random number between left and right
    int length = right - left + 1;
    int random = rand() % length;
    random = random + left;
    //swap array[random] with array[right]
    int temp = array[random];
    array[random] = array[right];
    array[right] = temp;
    
    int pivot = Hoare(array, left, right);
    
    QuicksortRdH(array, left, pivot - 1);
    QuicksortRdH(array, pivot + 1, right);
}

// Uses median of first, last and middle element as pivot
// Uses Lomuto Partitioning
void QuicksortMdL(int array[], int left, int right)
{
    if (left >= right)
        return;
    
    // find median of first, middle and last element
    int mid = (right - left) / 2 + left;
    int median = max(min(array[left],array[right]), min(max(array[left],array[right]), array[mid]));
    // check if median was first or middle element and do a swap if it's either
    if (median == array[left])
    {
        int temp = array[left];
        array[left] = array[right];
        array[right] = temp;
    }
    else if (median == array[right / 2])
    {
        int temp = array[right / 2];
        array[right / 2] = array[right];
        array[right] = temp;
    }

    int pivot = Lomuto(array, left, right);
    
    QuicksortMdL(array, left, pivot - 1);
    QuicksortMdL(array, pivot + 1, right);
}

/*
// Uses median of first, last and middle element as pivot
// Uses Hoare Partitioning
void QuicksortMdH(int array[], int left, int right)
{
    if (left >= right)
        return;
    
    // find median of first, middle and last element
    int mid = (right - left) / 2 + left;
    int median = max(min(array[left],array[right]), min(max(array[left],array[right]), array[mid]));
    // check if median was first or middle element and do a swap if it's either
    if (median == array[left])
    {
        int temp = array[left];
        array[left] = array[right];
        array[right] = temp;
    }
    else if (median == array[mid])
    {
        int temp = array[mid];
        array[mid] = array[right];
        array[right] = temp;
    }
    
    int pivot = Hoare(array, left, right);
    
    QuicksortMdH(array, left, pivot - 1);
    QuicksortMdH(array, pivot + 1, right);
}
*/


// another version of median of first, last and middle element as pivot
// Uses Hoare Partitioning
// I found that this version does not occur stack overflow when input size is larger.
void QuicksortMdH(int array[], int left, int right)
{
    while(left < right)
    {
        // find median of first, middle and last element
        //int mid = right / 2;
        int mid = (right - left) / 2 + left;
        int median = max(min(array[left],array[right]), min(max(array[left],array[right]), array[mid]));
        // check if median was first or middle element and do a swap if it's either
        if (median == array[left])
        {
            int temp = array[left];
            array[left] = array[right];
            array[right] = temp;
        }
        else if (median == array[mid])
        {
            int temp = array[mid];
            array[mid] = array[right];
            array[right] = temp;
        }
        
        int pivot = Hoare(array, left, right);
        
        if(pivot - left <= right - (pivot+1))
        {
            QuicksortMdH(array, left, pivot - 1);
            left = pivot + 1;
        }
        else
        {
            QuicksortMdH(array, pivot + 1, right);
            right = pivot;
        }
    }
}



