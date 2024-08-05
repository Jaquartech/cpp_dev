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




































































































#include "../header_files/stack.h"

dynamic_static_mem_int_type::dynamic_static_mem_int_type(int capacity) 
    : dy_mem(new int[capacity]), count(0), capacity_(capacity)
{
    for (int i = 0; i < capacity; i++)
    {
        dy_mem[i] = 0;
    }
    top = nullptr; // Initialize top to nullptr
}

dynamic_static_mem_int_type::~dynamic_static_mem_int_type()
{
    delete[] dy_mem; // Correctly delete the dynamic array
}

bool dynamic_static_mem_int_type::is_empty() const
{
    return count == 0;
}

bool dynamic_static_mem_int_type::is_full() const
{
    return count == capacity_;
}

int dynamic_static_mem_int_type::size() const
{
    return count;
}

int dynamic_static_mem_int_type::capacity() const
{
    return capacity_;
}

void dynamic_static_mem_int_type::push(const int &value)
{
    if (is_full())
    {
        throw "stack overflow";
    }
    dy_mem[count++] = value; // Add the value and then increment count
    top = &dy_mem[count - 1]; // Update top to the new top element
}

void dynamic_static_mem_int_type::pop()
{
    if (is_empty())
    {
        throw "stack underflow";
    }
    dy_mem[count - 1] = 0; // Optionally reset the value, not necessary though
    count--; // Decrement count
    if (count == 0)
    {
        top = nullptr; // If the stack is empty, set top to nullptr
    }
    else
    {
        top = &dy_mem[count - 1]; // Update top to the new top element
    }
}

int dynamic_static_mem_int_type::peek() const
{
    if (is_empty())
    {
        throw "stack underflow";
    }
    return *top; // Return the value at top
}

void dynamic_static_mem_int_type::display() const
{
    for (int i = 0; i < count; i++)
    {
        std::cout << dy_mem[i] << std::endl;
    }
}








