#include <iostream>
#include <thread>
#include <mutex>
#include <shared_mutex> 
#include <atomic>


using namespace std;

mutex m;
atomic<bool> init_x;
int x=0;

void producr1()
{
   while(1)
    {
      
       if (!init_x)
       {

           lock_guard lck{m};
           if (!init_x)
           {
              x = x + 1;
              cout << x << "pr1" << "\n";
           }
       }
    }
}
void producr2()
{
   while(1)
    {
      
       if (!init_x)
       {

           lock_guard lck{m};
           if (!init_x)
           {
              x = x + 1;
              cout << x << "pr2" << "\n";
           }
       }
    }
}
int main()
{

    thread t1 {producr1};
    
    thread t2 {producr2};
    t1.join();
    t2.join();

    cout<< " hello cpp";

}
