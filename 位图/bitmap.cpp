#include <iostream>
#include <vector>

using namespace std;


class BitMap{
public:
    BitMap() : _size(0) { }

    BitMap(size_t range) {
        _bitTable.resize(range / 8 + 1);
        _size = 0;
    }

    void set(size_t num) {
        size_t byteIdx = num / 8;
        size_t bitIdx = num % 8;
        if ((_bitTable[byteIdx] & 1 << bitIdx) == 0) {
            _bitTable[byteIdx] |= 1 << bitIdx;
            ++_size;
        }
    }

    void reset(size_t num) {
        size_t byteIdx = num / 8;
        size_t bitIdx = num % 8;
        if ((_bitTable[byteIdx] & 1 << bitIdx) == 1 << bitIdx) {
            _bitTable[byteIdx] &= ~(1 << bitIdx);
            --_size;
        }
    }

    bool search(size_t num) {
        size_t byteIdx = num / 8;
        size_t bitIdx = num % 8;
        if ((_bitTable[byteIdx] & 1 << bitIdx) == 1 << bitIdx) {
            return true;
        }
        return false;
    }

private:
    vector<char> _bitTable; 
    size_t _size;
};


int main() {
    BitMap b(10000000000);
    b.set(3999999);
    cout << b.search(3999999) << endl;
    b.reset(3999999);
    cout << b.search(3999999) << endl;
    return 0;
}