/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std ;
int main()
{
    vector<string> v;
    v.push_back("sandeep");
    v.push_back("sandeepp");
    v.push_back("sandee");
    
   auto it = std::find (v.begin(), v.end(), "sandee"); 
    if (it != v.end()) 
    { 
        std::cout << "Element " << "san" <<" found at position : " ; 
        std::cout << it - v.begin() << " (counting from zero) \n" ; 
    } 
    return 0;
}
