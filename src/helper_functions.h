#include <stdbool.h> 

#ifndef HELPER_FUNCTIONS_H  
#define HELPER_FUNCTIONS_H

bool process_arguments(int argc, char** argv); // returns whether or not the user cmd inputs are valid
bool get_full_directory_path(char* local_directory_name, char full_path[]); // returns whether the user input path exists, if so, it saves it into the second parameter
void open_editor_in_directory(char directory[]); // opens a VScode session in the user input directory 

#endif