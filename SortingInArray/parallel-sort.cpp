// Sort a list of items in parallel
//  To build your poject, make sure to use the following compiler flags:
//      For C++11: -std=c++11
//      For std::thread: -thread
//      For optimization: -O2 or -O3
//      For warnings: -Wall

#include <iostream> // cout
#include <cstdlib>  // rand
#include <chrono>  // time
#include "parasort.h" // parasort

int main ()
{
    const size_t sz = 100;
    double* list = new double[sz];
    srand(0);
    for ( unsigned i = 0; i < sz; i++ ) {
        list[i] = (double)rand()/(double)RAND_MAX;
    }
    auto t1 = std::chrono::high_resolution_clock::now();
#if 1
// parallel sort
    parasort(sz, list, 4);
#else
// sequential sort
    std::sort(list, list+sz);
#endif
    auto t2 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> tms = t2 - t1;
    std::cout << "Min: " << list[0] << ", Max: " << list[sz-1] << std::endl;
    std::cout << "Sorted in " << tms.count()/1000.0 << " sec." << std::endl;
    delete[] list;
    return 0;
}
