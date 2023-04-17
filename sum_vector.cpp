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
   printf(" inside sum_vector problem_setup, N=%ld \n", N);
   // Resize the vector to hold N elements
   std::vector<uint64_t> *vec = reinterpret_cast<std::vector<uint64_t>*>(A);
   vec->resize(N);
 
}

int64_t
sum(int64_t N, uint64_t A[])
{
   printf(" inside sum_vector perform_sum, N=%ld \n", N);

   uint64_t s = 0;

   for (int64_t i = 0; i < N; i++) {
       s += A[i];
   }

   return s;
}

