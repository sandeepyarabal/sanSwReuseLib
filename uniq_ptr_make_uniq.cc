#include <iostream>
#include <vector>
#include <memory>
using namespace std;

class Base {
public:
    virtual ~Base() {} // Virtual destructor is important for proper cleanup
    virtual void print() { std::cout << "Base\n"; }
};

class Derived : public Base {
public:
    void print() override { std::cout << "Derived\n"; }
};

unique_ptr<Base> read_shape(int a)
{
    if (a ==1 )
    {
    return make_unique<Base>();
    }
    else
    {
      return make_unique<Derived>();
    }
}

int main() {
    std::vector<std::unique_ptr<Base>> objects;
auto p = std::make_unique<Derived>();



    objects.push_back(std::make_unique<Base>());
    objects.push_back(std::make_unique<Derived>());
    objects.push_back(std::make_unique<Derived>());
    objects.push_back(move(p));
    objects.push_back(read_shape(2));

    for (const auto& obj : objects) {
        obj->print();
    }

    return 0;
}
