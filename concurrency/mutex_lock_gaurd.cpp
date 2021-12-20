#include <iostream>
#include <list>
#include <mutex>
#include <algorithm>

using namespace std;


std::list<int> some_list;
std::mutex some_mutex;
void add_to_list(int new_value)
{
std::lock_guard<std::mutex> guard(some_mutex);
some_list.push_back(new_value);
}
bool list_contains(int value_to_find)
{
std::lock_guard<std::mutex> guard(some_mutex);
return std::find(some_list.begin(),some_list.end(),value_to_find)
!= some_list.end();
}
int main()
{
    int find_val;
    
    add_to_list(1);
    add_to_list(10);
    add_to_list(12);
    add_to_list(15);
    cout<<"Hello World\n";
    
    find_val = list_contains(15);
    
    cout<<find_val;
    return 0;
}
