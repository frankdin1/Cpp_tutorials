#pragma once// Pragma once serves as a header guard. 
//Nevertheless, traditional header guard involves having 
// #ifndef SOME_UNIQUE_NAME_HERE
// #define SOME_UNIQUE_NAME_HERE
//in each header file
//In order to avoid the contents of a single header file appearing in more than .cpp file,
// we should only have forward declarations for function in .h files 

#ifndef ADD_H
#define ADD_H
int add(int x, int y);

#endif
