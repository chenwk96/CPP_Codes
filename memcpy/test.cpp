#include <iostream>

using namespace std;

int main() {
    char a[10] = "hello";
    cout << "&a[0] : " << &a[0] << endl;
    cout << "&a[1] : " << &a[1] << endl;
    cout << "a[0]  : " << a[0] << endl;
    cout << "a[1]  : " << a[1] << endl;
    cout << "a     : " << a << endl;
    cout << "&a    : " << &a << endl;
    cout << "a+1   : " << a + 1 << endl;
    // cout 会把char* 当做字符串处理

    cout << "*(a+1): " << *(a + 1) << endl;
    return 0;
}