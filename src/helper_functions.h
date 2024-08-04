#include <stdbool.h> 

bool process_arguments(int argc, char** argv); 
bool get_full_directory_path(char* local_directory_name, char full_path[]); // set full_path to the global path equivalent of the input path, return either true or false depending on the success of the operation
void open_editor_in_directory(char directory[]);  