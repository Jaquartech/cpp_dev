#include "../header_files/stack.h"

stack_static_mem_int_type::stack_static_mem_int_type() : top(-1){

    for (auto i = 0; i < CONTAINER_SIZE; i++)
    {
        array_container[i] = 0;
    }
    
}

void stack_static_mem_int_type::display() const{

    for (int i = 0; i < CONTAINER_SIZE; i++)
    {
        std::cout << array_container[i] << " ";
    }
    
}
