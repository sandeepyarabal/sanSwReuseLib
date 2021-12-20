#include <iostream>
#include <memory>
#include <thread>
#include <vector>
#include <stdio.h>
#include <cstring>
#include <string>
#include <mutex>

using namespace std;
void print()
{
    cout<< "sandeep";
}
struct prin
{
  public:
  
   int v;
   prin(int vv ):v{vv}{};
   void operator()()
   {
       cout<< "patil"<< v ;
   }
    
};

int main() {
    
    string Name = "sandeeppatil";

    thread t1 {print};
    thread t2 {prin(3)};
    t1.join();
    t2.join();
   
    return 0;
}
