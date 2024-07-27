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

bool stack_static_mem_int_type::is_empty() const{
    return top == -1;
}

bool stack_static_mem_int_type::is_full() const{
    return top == CONTAINER_SIZE - 1;
}

 int stack_static_mem_int_type::size() const{
    if(!is_empty()) return (top + 1);
 }

int stack_static_mem_int_type::capacity() const{
    return CONTAINER_SIZE;
}

void stack_static_mem_int_type::push(const int & value){
    if (is_empty())
    {
        std::cout << "Stack Underflow\n";
        return;
    }
    if (is_full())
    {
         std::cout << "Stack Overflow\n";
        return;
    }
    
    array_container[++top] = value;
}

int stack_static_mem_int_type::peek() const{
    if (is_empty())
        throw "Exception: Stack Underflow\n";
    
   return array_container[top];
}

void stack_static_mem_int_type::pop(){
    if (is_empty())
        throw "Exception: Stack Underflow\n";
    
   std:: << "top: " << array_container[--top] << std::endl;
}
