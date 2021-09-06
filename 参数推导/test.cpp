#include <iostream>

using namespace std;

template <class I, class T>
void func_impl(I iter, T t) {
    T temp = 1;
    
    // ... 
    cout << temp << endl;
};

template <class I>
void func(I iter) {
    func_impl(iter, *iter);
} 

int main() {
    int i;
    func(&i);
}

// 利用编辑器自动对template进行参数推导，推导除类型T
// 从而能进行变量声明。
// 在STL 迭代器中，有时在算法中会用到迭代器所指对象的类型
// 假设算法中必须要声明一个变量，以迭代器所指随指对象类型为型，就可以通过这种方法实现。


// STL源码剖析 P.85
// 迭代器最常用的相应型别有5中，但不是任何情况下任何一种都可以利用template参数推导机制来取得。
// 例如：value type必须用于函数的传回值，上述只能推导出参数，无法推导出函数返回值型别。
// 解决办法：采用内嵌型别声明