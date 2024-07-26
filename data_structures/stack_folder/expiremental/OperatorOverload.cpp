#include "../header_files/stack.h"

/*class PLusOPerator
{
    private:
    int x;

    public:
    PLusOPerator(int ini_x);

    void printX();

   PLusOPerator operator+(const PLusOPerator& other) const;
};*/
PLusOPerator::PLusOPerator(int ini_x) : x(ini_x) {}

void PLusOPerator::printX()
{
    std::cout << "X: " << x << std::endl;
}

PLusOPerator PLusOPerator::operator+(const PLusOPerator& other) const
{
    std::cout << "infunction\n";
    return PLusOPerator(this->x + other.x);
}