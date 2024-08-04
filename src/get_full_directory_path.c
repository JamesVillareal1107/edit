#include <stdlib.h>
#include <string.h>  
#include <stdio.h> 
#include <stdbool.h>

bool get_full_directory_path(char* local_directory_name, char full_path[]){ 
    // string literals representing the parts of the find command
    const char find_command_prefix[] = "find ~ -type d -name "; 
    const char* target = local_directory_name; 

    // build the find command
    char* full_command = (char*)malloc(strlen(find_command_prefix) + strlen(target) + 1);    
    if(full_command == NULL){ 
        return false;
    } 
    strcpy(full_command, find_command_prefix); 
    strcat(full_command, target);

    // execute the find command and put the result in a file 
    FILE* command_result = popen(full_command, "r"); 
    if(command_result == NULL){ 
        return false;
    } 

    // copy the contents of the file into the second parameter
    int index = 0;
    char ch; 
    while((ch = fgetc(command_result)) != EOF){ 
        full_path[index] = ch; 
        index++;
    }  
    full_path[index] = '\0'; 

    // if the path is invalid return false
    if(strlen(full_path) == 0){ 
        return false;
    }

    // free dynamically allocated memory
    free(full_command); 
    fclose(command_result);  

    // return true if the above procedures succeed
    return true;
} 
