#include "../header_files/stack.h"
#include <limits>
int main()
{
    stack_static_mem_int_type obj;
    int option;
    int entry;

    std::cout << "Welcome\n";
    while (true)
    {
        std::cout << "Enter 1: push()\nEnter 2: pop()\nEnter 3: peek()\nEnter\
Enter 4: is_empty()\nEnter 5: is_full()\nEnter 6: capacity()\nEnter 7: display()\n";
        std::cout << "enter Option: ";
        std::cin >> option;
        
        switch (option)
        {
        case 1 :
            std::cout << "enter value: ";
            std::cin >> entry;
            obj.push(entry);
            break;
        case 2 :
            try
            {
                obj.pop();
            }
            catch(const char * e)
            {
                std::cerr << e << '\n';
            }
            break;
        case 3 :
            try
            {
                //n = obj.peek();
                std::cout <<"top: " << obj.peek() << std::endl << std::endl;
            }
            catch(const char * e)
            {
                std::cerr << e << '\n';
            }
            break;
        case 4 :
        if (!obj.is_empty())
            std::cout <<"is_empty(): Stack is having elements" << std::endl << std::endl;
        else
            std::cout <<"is_empty(): Stack is empty" << std::endl << std::endl;
        
            break;
        case 5 :
           if (obj.is_full())
            std::cout <<"is_full():  Stack is full" << std::endl << std::endl;
        else if (obj.is_empty())
            std::cout <<"is_full():  Stack is Underflow" << std::endl << std::endl;
        else
            std::cout <<"is_full(): Stack conatins element within range" << std::endl << std::endl;
            break;
        case 6 :
           std::cout << "capacity: " << obj.capacity() << std::endl << std::endl;
            break;
        case 7 :
            std::cout << "display caalled\n";
            obj.display();
            break;
        default:
            //std::cout << "You have entered invalid Option\n";
            break;
        }
        if (std::cin.fail())
                {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Error: Invalid Option or function arguement arguement" << std::endl;
                //continue;
               }
        std::cout << std::endl;
    }
   
}