#include "helper_functions.h" 
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv){  
    // parse command line arguments;
    if(!(process_arguments(argc, argv))){ 
        printf("INVALID ARGS\n"); 
        return 1;
    }  

    // try to find the global path for the second argument, return false if it could not be found, print said path afterwards
    char full_path[2024]; 
    if(!get_full_directory_path(argv[1], full_path)){  
        printf("FAILED TO FIND PATH\n");
        return 1;
    } 
    printf("%s",full_path);  

    // open a VScode session in the established global path and terminate the program
    open_editor_in_directory(full_path);
    return 0;
} 
