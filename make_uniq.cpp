#include <iostream>
#include <vector>
#include <algorithm>
#include<memory>
using namespace std;

class shape
{
	public:

	void draw()
	{
		cout << "shape";
	}

};
int main()
{

    vector<unique_ptr<shape>> v;
	  auto p = make_unique<shape> ();
	  p->draw();
  	std::cout << "Hello World!\n";

    v.push_back(move(p));
	  v.push_back(move(p));

	  for (auto &p : v)
	  {
		    p->draw();
	  }
	  std::cout << "Hello san!\n";
  
    return 0;
}
