#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>



void 
setup(int64_t N, uint64_t A[])
{
   printf(" inside sum_indirect problem_setup, N=%ld \n", N);
// sets values for A
   for (int i = 0; i < N; ++i) {
// generates a random integer between 0 and N-1
        A[i] = rand() % N; 
    }
}

int64_t
sum(int64_t N, uint64_t A[])
{
   printf(" inside sum_indirect perform_sum, N=%ld \n", N);

   uint64_t sum = 0;
   // start from first element of A
   uint64_t indx = A[0];

    for (int i = 0; i < N; ++i) {
      // add the value of the current index to the sum
        sum += indx;
      // update the current index to the next index in A
        indx = A[indx];
    }

    return sum;
}

