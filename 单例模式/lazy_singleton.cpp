#include <iostream>

using namespace std;

class Singleton {
private:
    Singleton() {
        cout << "Constructor" << endl;
    }
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
    ~Singleton() {
        cout << "Destructor" << endl;
    }
    static Singleton* _instance;

public:
    static Singleton* getInstance() {
        if (_instance == nullptr) {
            _instance = new Singleton();
        }
        return _instance;
    }
private:
    class Dest {
    public:
        Dest(){};
        ~Dest() {
            if (_instance != nullptr) {
                delete _instance;
            }
            _instance = nullptr;
        }
    };
    static Dest _dest;
};

Singleton* Singleton::_instance = nullptr;
Singleton::Dest Singleton::_dest;

int main() {
    Singleton* obj1 = Singleton::getInstance();
    Singleton* obj2 = Singleton::getInstance();
    cout << "&Obj1 = " << obj1 << endl;
    cout << "&obj2 = " << obj2 << endl;
    return 0;
}