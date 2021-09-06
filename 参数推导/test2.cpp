#include <iostream>

using namespace std;

template <class T> 
struct MyIter {
    typedef T value_type;
    T* ptr;
    MyIter(T* p = 0) : ptr(p) { }

    T& operator*() const {
        return *ptr;
    }
};

// template <class I>
// T func(I iter) {   // error: ‘T’ does not name a type
//     return *iter;
// }

template <class I>
typename I::value_type
func(I iter) {
    return *iter;
}


int main() {
    MyIter<int> iter(new int(8));
    cout << func(iter) << endl;
    return 0;
}