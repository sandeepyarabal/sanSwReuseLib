#include <iostream>
#include <vector>
#include <string>
using namespace std;
template<typename in, typename T>
in find(in first, in last, T& val)
{
    while (first != last && *first != val)
    {
        return first;
    }
}

template<typename in, typename Pred>
in find_if_Pred(in first, in last, Pred pred)
{
    while (first != last && pred(*first))
    {
        return first;
    }
}

int main()
{
    vector<int> bin;
    bin.push_back(4);
    bin.push_back(6);
    bin.push_back(6);
    bin.push_back(6);

    auto p = find(bin.begin(), bin.end(), 9);
        if (p != bin.end())
        {
            cout << "we found val";
        }
        else
        {
            cout << "no val";
        }

        auto a = find_if(bin.begin(), bin.end(), [](int x) {return x % 2; });
        if (a != bin.end())
        {
            cout << "we found val";
        }
        else
        {
            cout << "no val";
        }

     

    cout << "hello world";
    return 0;
}