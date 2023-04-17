#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>
// #include "benchmark.cpp"



void 
setup(int64_t N, uint64_t A[])
{
   printf(" inside direct_sum problem_setup, N=%ld \n", N);
}

int64_t
sum(int64_t N, uint64_t A[])
{
   printf(" inside direct_sum perform_sum, N=%ld \n", N);

   int64_t sum = 0;

   for (int64_t i = 0; i < N; i++) {
       sum += i;
   }
   return sum;
}

