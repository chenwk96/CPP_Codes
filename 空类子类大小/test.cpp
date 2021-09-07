// #include <iostream>

// using namespace std;

// class A {
// public:
//     A() { cout << "A :Con" << endl; }
//     ~A() {
//         cout << "~A" << endl;
//     }
//     int a;
// };

// class B : public A {
// public:
//     B(int _b) : b(_b) {
//         cout << "B" << endl;
//     }
//     ~B() {
//         cout << "~B" << endl;
//     }
// private:
//     int b;
// };

// int main() {
//     B* p = new B(2);
//     cout << p -> a << endl;
//     delete p;
//     return 0;
// }

#include <iostream>

using namespace std;

class A{

};

class B : public A {
    int b;
};



int main() {
    // A a;
    // B b;
    cout << sizeof(A) << endl;
    cout << sizeof(B) << endl;
    return 0;
}

