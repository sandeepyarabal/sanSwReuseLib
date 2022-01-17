#include <iostream>
#include <vector>
#include <utility>
using namespace std;

template <typename K, typename V>
class map{
    
    private:
      vector< pair<K,V>> elem; 
       
    public:
      V & operator[]( const K &k)
      {
          for(auto &x: elem)
          {
            if (k ==x.first)
                return x.second;
          } 
           elem.push_back({k,V{}});
            return elem.back().second;
          
      }
      pair<K,V>* begin(){ return &elem[0];}
      
      pair<K,V>* end(){ return &elem[0]+ elem.size();}
       
};

int main()
{
    map <string, int> ph_book;
    
    ph_book["sandeep"];
    ++ph_book["patil"];
    
    for(auto &x:ph_book)
    {
      cout<<x.first << ":" << x.second << "\n";
    }

    return 0;
}
