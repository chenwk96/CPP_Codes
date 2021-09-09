#include <iostream>

using namespace std;

class A{

};

class B : public A {
    int b;
};

void add1(int& a) {
    a++;
}

int main() {
    // A a;
    // B b;
    void (*func)(int&);
    cout << sizeof(A) << endl;
    cout << sizeof(B) << endl;
    cout << sizeof(A()) << endl;
    cout << sizeof(B()) << endl;
    cout << sizeof(func) << endl;
    func = add1;
    int b = 1;
    func(b);
    cout << b << endl;

    cout << sizeof(4) << endl;
    cout << sizeof(std::move(b)) << endl;
    return 0;
}

