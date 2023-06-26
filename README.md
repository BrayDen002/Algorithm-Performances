# Default build instructions:


`% cd Algorithm-Performances`     # contains the source files and CMakeLists.txt file  
`% mkdir build`  
`% cd build`  
`% cmake ../`           # cmake generates lots of output   
`% make`                # to build the programs  

# Running the codes

Once the codes are built, you should be able to just run each one from the command line:

`% ./sum_direct`

or 

`% ./sum_indirect`

or

`% ./sum_vector`

When you run each code, it will iterate through the set of problem sizes predefined inside benchmark.cpp


# EOF
