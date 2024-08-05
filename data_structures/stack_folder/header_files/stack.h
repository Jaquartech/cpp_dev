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
    public:
    int top;
    int array_container[CONTAINER_SIZE];

    public:
    stack_static_mem_int_type();
    void push(const int & value);
    void pop();
    int peek() const;
    bool is_empty() const;
    bool is_full() const;
    int size() const;
    int capacity() const;
    void display() const;
};

// #############################################################
class dynamic_static_mem_int_type
{
    private:
    int *dy_mem;
    int *top;
    unsigned int count;
    unsigned int capacity_;

    public:
    dynamic_static_mem_int_type(int capacity);
    ~dynamic_static_mem_int_type();
    void push(const int & value);
    void pop();
    int peek() const;
    bool is_empty() const;
    bool is_full() const;
    int size() const;
    int capacity() const;
    void display() const;
    void clr_screen();
};


#define CONST_NUM 5
#endif //STACK_H
