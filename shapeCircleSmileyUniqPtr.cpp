// class hirarchy  Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include<memory>
using namespace std;
struct point
{
	int x;
	int y;
};

class shape
{
public:
	virtual void draw() = 0;
};
class circle : public shape
{
private:
	point p;
	int radius;
public:
	circle(point pp, int rr)
	{
		p = pp;
		rr = radius;
	}
	void draw();
};

void circle::draw()
{
	cout << "drawing circle"  ;
}

class smiley : public circle
{
private:

public:
	smiley(point s, int r) :circle{ s,r } {};

	void draw();
};
void smiley::draw()
{
	cout << "drawing smiley";
}


int main()
{
	point p;
	p.x = 2;
	p.y = 3;
	shape* c = new circle(p, 5);
	
	shape* sm = new smiley(p, 6);
	
	

	vector<shape*> vec_sh;
	vec_sh.push_back(c);
	vec_sh.push_back(sm);

	for (auto p : vec_sh)
	{
		p->draw();
	}

	for_each(vec_sh.begin(), vec_sh.end(), [](shape* sh) {sh->draw(); });


	shape* smm = new smiley(p, 6);
	if (smiley* p = dynamic_cast<smiley*>(smm)) {
		cout << "dynamic smiley";
	}
	else {
		cout << "dynamic circle";
	}
        unique_ptr<shape> utr (new triangle(3,3));
        utr->draw();

	vector<unique_ptr<shape>> v;
	
	v.emplace_back(c);
	v.emplace_back(sm);

	for (auto &p : v)
	{
		p->draw();
	}

	std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
