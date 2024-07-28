#This file autimates the build process

#Variables
CC = g++
CFLAGS = -c

#Directories
INCLUDE_DIR = data_structures/stack_folder/header_files
SRC_DIR = data_structures/stack_folder/source_files
OBJ_DIR = data_structures/stack_folder/object_files

#Output
EXECUTABLE = executable

#Surces
SOURCES = $(SRC_DIR)/main.cpp $(SRC_DIR)/static_stack.cpp
OBJECTS = $(OBJ_DIR)/main.o $(OBJ_DIR)/static_stack.o

#Targets
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@

$(OBJ_DIR)/main.o: $(SRC_DIR)/main.cpp $(INCLUDE_DIR)/stack.h
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(SRC_DIR)/main.cpp -o $@

$(OBJ_DIR)/static_stack.o: $(SRC_DIR)/static_stack.cpp $(INCLUDE_DIR)/stack.h
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(SRC_DIR)/static_stack.cpp -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
	rm -rf $(OBJ_DIR)












































































































