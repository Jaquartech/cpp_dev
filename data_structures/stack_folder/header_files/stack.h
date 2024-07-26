#ifndef STACK_H
#define STACK_H

#include <iostream>

class PLusOPerator
{
    private:
    int x;

    public:
    PLusOPerator(int ini_x);

    void printX();

   PLusOPerator operator+(const PLusOPerator& other) const;
};
// #################################################################

#define CONTAINER_SIZE 5
class stack_static_mem_int_type
{
    private:
    int array_container[CONTAINER_SIZE];

    public:
    stack_static_mem_int_type();
    void _push(const int & value) const;
    void display_content() const;
};
#endif //STACK_H
