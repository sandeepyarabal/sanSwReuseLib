#pragma once
class Global {

    static int size;

private:
    Global() {};
public:

    static void set_size(int sz) { size = sz; }
    static int get_size() { return size; }

};
