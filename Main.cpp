#include "Declarations.h"
#include <iostream>
#include <cstdlib>
#include <chrono>
#include <stdlib.h>
#include <time.h>
using namespace std;
using Clock=std::chrono::high_resolution_clock;

int main()
{
    srand((unsigned int)time(NULL));
    int size = 10000, array[size];
    for(int i = 0; i < size; ++i)
    {
        array[i] = rand() % 100;
    }
    TestQuicksortRdH(array, size);
    
    return 0;
}
