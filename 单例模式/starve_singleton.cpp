#include <iostream>

using namespace std;

class Singleton {
public:
    static Singleton* getInstance() {
        return _instance;
    }
    // 方法一， 在类中再写一个主动资源释放的方法
    // static void deleteInstance() {
    //     delete _instance;
    // }
    void init(int a, int b);
    int a;
    int b;

private:
    // 构造函数私有
    Singleton(){
        cout << "Constructor" << endl;
    };
    // 防止拷贝
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;    

    ~Singleton() {
        cout << "Destructor" << endl;
    }

    static Singleton* _instance;
// 方法二：定义一个内部的类
private:
    class Dest {
    public:
        Dest() {}
        ~Dest() {
            if (_instance != nullptr) 
                delete _instance;
            _instance = nullptr;
        }
    };
    static Dest dest;
};

// 在程序入口之前完成单例对象的初始化
Singleton* Singleton::_instance = new Singleton();

void Singleton::init(int a, int b) {
    this -> a = a;
    this -> b = b;
}
Singleton::Dest Singleton::dest;

int main() {
    Singleton* obj(Singleton::getInstance());
    obj -> init(10, 5);
    cout << obj -> a << " " << obj -> b << endl;
    Singleton* obj2(Singleton::getInstance());
    cout << obj2 -> a << " " << obj2 -> b << endl;
    /**********
    Constructor
    10 5
    ***********/
    // 内存泄漏，全局数据区存储的并不是一个实例对象，而是一个实例对象的指针，他是一个地址而已
    // 真正占有资源空间的实例对象存储在堆中，这样的声明方法可以减小全局数据区的占用量，把一大堆单例对象放在了堆中，
    // 但我们需要主动地去调用delete释放申请的资源。我们想要手动调用delete 直接释放该实例是不可能的，
    // 因为它的析构函数是私有的，调不到析构函数（析构函数是私有也是我们要求的）。
    
    // 方法一：
    // Singleton::deleteInstance();
    return 0;
}