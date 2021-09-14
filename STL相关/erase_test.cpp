#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    list<int> lst{1, 2, 3, 4};
    vector<int> vec{1, 2, 3, 4};
    // for (auto it = lst.begin(); it != lst.end(); it++) {
    //     auto temp = lst.erase(it);
    //     cout << *temp << endl;
    // }
    // auto it = lst.begin();
    // auto temp = lst.erase(it);
    // cout << *temp << endl;
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;

    for (auto it = vec.begin(); it != vec.end(); it) {
        vec.erase(it);
    }

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    
    return 0;

}