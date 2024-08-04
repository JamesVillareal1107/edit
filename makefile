bin/openproj: obj/main.o obj/process_arguments.o obj/get_full_directory_path.o obj/open_editor_in_directory.o
	gcc -o bin/openproj obj/main.o obj/process_arguments.o obj/get_full_directory_path.o obj/open_editor_in_directory.o 

obj/main.o: src/main.c 
	gcc -Os -c src/main.c   
	mv main.o ./obj

obj/process_arguments.o: src/process_arguments.c 
	gcc -Os -c src/process_arguments.c   
	mv process_arguments.o ./obj

obj/get_full_directory_path.o:  src/get_full_directory_path.c
	gcc -Os -c src/get_full_directory_path.c	  
	mv get_full_directory_path.o ./obj

obj/open_editor_in_directory.o: src/open_editor_in_directory.c 
	gcc -Os -c src/open_editor_in_directory.c	  
	mv open_editor_in_directory.o ./obj 

run: 
	bin/openproj