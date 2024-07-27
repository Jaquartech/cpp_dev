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
    int top;
    int array_container[CONTAINER_SIZE];

    public:
    stack_static_mem_int_type();
    void push(const int & value);
    void pop() const;
    int peek() const;
    bool is_empty() const;
    bool is_full() const;
    int size() const;
    int capacity() const;
    void display() const;
};
#endif //STACK_H
