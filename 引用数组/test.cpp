#include <iostream>

using namespace std;

int main() {
    int a[5] = {0};
    int (&b)[5] = a;
    for (int i = 0; i < 5; ++i) {
        b[i] = 1;
    }
    cout << sizeof (b) << endl;
    for (int i = 0; i < 5; ++i) {
        cout << b[i] << endl;
    }
    return 0;
}

// 本质上，引用和指针没有区别。只不过在语言层面上，C++设计者将通过指针来操作引用的实现细节隐藏了。不过，我们依然可以肯定：
// （1）定义一个引用就是定义一个指针，这个指针保存引用对象的地址，且指针类型为const，不可以再指向其他对象；
// （2）每次对引用变量的使用，实际都伴随着解引用，知识我们看不到符号*；
