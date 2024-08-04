#include <stdio.h>  
#include <stdbool.h> 

#define INVALID_ARG_COUNT_ERROR "INVALID ARGUMENT"

bool process_arguments(int argc, char** argv){  
    // prints error message if the arg count is not correct
    if(argc != 2){ 
        return false;
    }  
    return true; 
} 
