#include <iostream>
#include <thread>
#include <mutex>
#include <shared_mutex> 
#include <atomic>
#include <queue>
#include<condition_variable>

using namespace std;

mutex mmutex;
condition_variable mcond;
class message
{
   public:
   message(int i)
   {
       m = i;
   }
   void print_mesage()
   {
        cout << m;
   }
   private:
   int m =0 ;
};
queue<message> mquue;

void producer()
{
   while(1)
    {
      message m(18);
      scoped_lock lck { mmutex};
      mquue.push(m);
      mcond.notify_one();
              
    }
}
void consumer()
{
   while(1)
    {
      unique_lock lck {mmutex};
      mcond.wait(lck,[] {return !mquue.empty(); });

      auto m = mquue.front();
      mquue.pop();
      lck.unlock();

      m.print_mesage();

    }
}
int main()
{

    thread t1 {producer};
    
    thread t2 {consumer};
    t1.join();
    t2.join();

    cout<< " hello cpp";

}
