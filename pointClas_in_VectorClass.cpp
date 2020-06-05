// helloworld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class point
{
private:
	int x;
	int y;
public:
	void set_val(int xx, int yy)
	{
		x = xx;
		y = yy;
	}
	int get_val()
	{
		return x;
	}
};

template<typename T>
class vector
{
private:
	T* elem;
	int sz;
public:
	vector(int s)
	{
		sz = s;
		elem = new T[s];
	}
	T& operator [](int i) { return elem[i]; };
};

int main()
{
	vector<point>v(5);

	for (int i = 0; i < 5; i++)
	{
		v[i].set_val( i+5,i);

	}
	for (int i = 0; i < 5; i++)
	{
		std::cout << v[i].get_val() << "" << "\n";
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
