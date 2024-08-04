#include <stdlib.h> 
#include <stdio.h>
#include <string.h> 

void open_editor_in_directory(char directory[]){ 
    // set up the shell command
    char code_command_prefix[] = "code ";  
    char* full_command = (char*)malloc(strlen(code_command_prefix) + strlen(directory) + 1); 
    if(full_command == NULL){ 
        printf("COMMAND EXECUTION FAILED"); 
        return;
    } 
    strcpy(full_command, code_command_prefix);
    strcat(full_command, directory); 

    // execute shell command
    system(full_command);  

    // free dynamically allocated memory
    free(full_command);
}   
