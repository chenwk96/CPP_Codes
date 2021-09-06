#include <iostream>
#include <limits.h>

using namespace std;

class heap{
public:
    heap(int maxsize) : _capacity(maxsize + 1) {
        _data = new int[maxsize + 1];
        _size = 0;
        _data[0] = INT_MIN;
    }

    int size() {
        return _size;
    }

    bool empty() {
        return _size == 0;
    }

    bool full() {
        return _size == _capacity;
    }

    bool push(int x) {
        if (full()) {
            return false;
        }
        _size++;
        _data[_size] = x;
        up();
        return true;
    }

    int top() {
        if (empty()) {
            return INT_MIN;
        }
        return _data[1];
    }

    void pop() {
        _data[1] = _data[_size--];
        down(1);
    }

private:
    void down(int idx) {
        int i = idx;
        if (idx * 2 <= _size && _data[idx * 2] < _data[i]) i = idx * 2;
        if (idx * 2 + 1 <= _size && _data[idx * 2 + 1] < _data[i]) i = idx * 2 + 1;
        if (i != idx) {
            swap(_data[i], _data[idx]);
            down(i);
        }  

    }
    void up() {
        int i = _size;
        while (i / 2 && _data[i / 2] > _data[i]) {
            swap(_data[i], _data[i / 2]);
            i /= 2;
        }
    }


private:
    int* _data;
    int _size;
    int _capacity;
};

int main() {
    heap hp(10);
    for (int i = 10; i >= 1; --i) {
        hp.push(i);
    }

    while (hp.size()) {
        cout << hp.top() << endl;
        hp.pop();
    }

    return 0;
}
