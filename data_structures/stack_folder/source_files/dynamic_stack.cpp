#include "../header_files/stack.h"

dynamic_static_mem_int_type::dynamic_static_mem_int_type(int capacity) : dy_mem(new int[capacity]), top(nullptr),\
count(0),capacity_(capacity)
{
    for (int i = 0; i < capacity; i++)
    {
        dy_mem[i] = 0;
    }
    
}

dynamic_static_mem_int_type::~dynamic_static_mem_int_type()
{
    delete [] dy_mem;
}

bool dynamic_static_mem_int_type::is_empty() const
{
    return size() == 0;
}

bool dynamic_static_mem_int_type::is_full() const
{
    return (capacity() ==  size());
}

int dynamic_static_mem_int_type::size() const
{
    return count;
}

int dynamic_static_mem_int_type::capacity() const
{
    return capacity_;
}

void dynamic_static_mem_int_type::push(const int & value)
{
    if (is_full())
    {
       throw std::overflow_error("stack overflow");
    }
    dy_mem[count] = value;
    top = &dy_mem[count];
    //std::cout << "dymem: " << dy_mem << "   " << "top: " << top << std::endl;
    count++;    
}

void dynamic_static_mem_int_type::pop()
{   
    if (is_empty())
    {
        throw  "stack underflow";
    }
    count--;
    top = (count > 0) ? &dy_mem[count - 1] : nullptr;
}

 int dynamic_static_mem_int_type::peek() const
 {
    if (is_empty())
    {
        throw "stack underflow";
    }
    return *top;
 }

 void dynamic_static_mem_int_type::display() const{
    int *temp = top;
    while ((temp != nullptr) & (temp > dy_mem))
    {
        std::cout << *temp << std::endl;
        temp--;
    }
    if (temp != nullptr)
    {
        std::cout << *temp << std::endl;
    }
    else
        std::cout << "stack underlow\n";
}

void dynamic_static_mem_int_type::clr_screen()
{
    system("clear");
}