#include <iostream>
#include<list>

using namespace std;

template<class Elem> struct Link {
    Link(const Elem& v = Elem(), Link* p = 0, Link* s = 0)
        :prev(p), succ(s), val(v) { }
    Link* prev;
    Link* succ;
    Elem val;
};

template<class Elem> class my_list {
public:
    my_list() :first(0) { }

    class iterator;
    iterator begin() { return iterator(first); }
    iterator end() { return iterator(0); }   
    void push_front(const Elem& v);
    Link<Elem>* first;
};

template<class Elem> class my_list<Elem>::iterator {
    Link<Elem>* curr;
public:
    iterator(Link<Elem>* p) :curr(p) { }
    iterator& operator++() { curr = curr->succ; return *this; } // forward
    iterator& operator--() { curr = curr->prev; return *this; } // backward
    Elem& operator*() { return curr->val; }    // get value (dereference)

    bool operator==(const iterator& b) const { return curr == b.curr; }
    bool operator!=(const iterator& b) const { return curr != b.curr; }
};

template<class Elem>
void my_list<Elem>::push_front(const Elem& v)
{
    first = new Link<Elem>(v, 0, first);
}

template<class Iterator>
Iterator high(Iterator first, Iterator last)
{
    Iterator high = first;
    for (Iterator p = first; p != last; ++p)
        if (*high < *p) high = p;
    return high;
}

int main()
{
    my_list<int> lst;
    lst.push_front(1);
    lst.push_front(11);
    lst.push_front(13);
    lst.push_front(14);
    lst.push_front(15);
    lst.push_front(16);
    my_list<int>::iterator p = high(lst.begin(), lst.end());
    std::cout << "The highest value was " << *p << "\n";

    cout << "hello world";
    return 0;
}