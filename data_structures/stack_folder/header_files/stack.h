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

#endif //STACK_H
