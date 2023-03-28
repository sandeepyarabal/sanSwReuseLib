#include <iostream>
#include <memory>
#include <vector>
using namespace std ;
class MyBaseClass 
{ 
public: 
    virtual void printmessage() 
    { 
        std::cout << "Hello from a base class."; 
    } 
}; 

class MyderivedClass: public MyBaseClass 
{ 
public: 
    void printmessage() 
    { 
        std::cout << "Hello from a derived class."; 
    } 
}; 

class shape
{
    public:
    void print()
    {
        std::cout << "cirele";
    }
};
int main( )
{
   std::vector<unique_ptr<shape>> vshape;
   auto ptr = make_unique<shape>();
 
    ptr->print();
    
    vshape.push_back(make_unique<shape>());
    vshape.push_back(make_unique<shape>());
    
    for ( auto &p : vshape)
    {
        p->print();
    }
    std::cout << "hello world test";
    
    std::unique_ptr<MyBaseClass> p = std::make_unique<MyderivedClass>(); 
    p->printmessage(); 
    
    
    std::vector<unique_ptr<MyBaseClass>> vs;
    vs.push_back(make_unique<MyderivedClass>());
    vs.push_back(make_unique<MyBaseClass>());
     
    for ( auto &ps : vs)
    {
        ps->printmessage();
    }
    return 0;
}
