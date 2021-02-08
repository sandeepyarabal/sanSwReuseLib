#include <iostream>
#include "Global.h"
int Global::size;

int main()
{
   
    Global::set_size(2);

    std::cout<<"Hello World!\n";
    std::cout << Global::get_size();
}
