#include <iostream>

using namespace std;

class A {
public:
    int x;
public:
    A(int xx) : x(xx) {}
    A(const A& a) {
        x = a.x;
        x++;
    }
    void operator=(const A& a1) {}
};