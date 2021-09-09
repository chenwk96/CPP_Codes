#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec;
    for (int i = 0; i < 10; ++i) {
        vec.push_back(i);
    }
    cout << "before clear :" << endl;
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;

    // vec.clear();

    // cout << "after clear :" << endl;
    // cout << vec.size() << endl;
    // cout << vec.capacity() << endl;
    /*******************
     * before clear :
     * 10
     * 16
     * after clear :
     * 0
     * 16
     * *****************/
    // 即clear只清空元素，但不会改变capacity

    // vector<int>().swap(vec);
    // cout << "after swap :" << endl;
    // cout << vec.size() << endl;
    // cout << vec.capacity() << endl;
    // after swap :
    // 0
    // 0


    // cout << "always pop_back()" << endl;
    // while (vec.size()) {
    //     vec.pop_back();
    // }
    // cout << vec.size() << endl;             // 0
    // cout << vec.capacity() << endl;         // 16
    // return 0;

}