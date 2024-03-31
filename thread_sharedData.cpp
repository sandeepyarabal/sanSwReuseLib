#include<iostream>
#include <thread>
#include <mutex>
#include <shared_mutex> 

using namespace std;

int sh =0;
shared_mutex m;

void con1( )
{
    while(1)
    {
        shared_lock lck{m};
        cout << sh << "con1" << "\n";
    }
}

void con2()
{
    while(1)
    {
      shared_lock lck{m};
      cout << sh << "con2" << "\n";
    }
}

void producr()
{
   while(1)
    {
      

      unique_lock lck{m};
      sh = sh + 1;
      cout << sh << "pr" << "\n";
    }
}
int main()
{
    thread t1 {con1};
    thread t2 {con2};
    thread t3 {producr};
    t1.join();
    t2.join();
    t3.join();

    cout<< " hello cpp";

}
