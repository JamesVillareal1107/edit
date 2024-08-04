#include <stdbool.h> 

bool process_arguments(int argc, char** argv); 
bool get_full_directory_path(char* local_directory_name, char full_path[]); 
void open_editor_in_directory(char directory[]);  