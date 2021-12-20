#include <stdio.h>
#include <iostream>
#include <cstring>
#include <string>
#include <memory>
#include <mutex>
#include <thread>

using namespace std;
void unthreadsafecode(char* s)
{
   printf(" %s",s);
}
class logger
{
    private:
    std::mutex m;
 
    public:
    logger()
    {
        
    }
   ~logger()
    {
        
    }
    void threadsafecode(string s)
    {
        int n = s.length();
        char char_array[n + 1];
        strcpy(char_array, s.c_str());
        std::lock_guard<std::mutex> l(m);
        unthreadsafecode(char_array);
    }
    
   
};

int main()
{
    string Name = "sandeeppatil";

    shared_ptr<logger> shlgr;
    shlgr->threadsafecode(Name);
    cout<<"Hello World";
    

    return 0;
    
}
