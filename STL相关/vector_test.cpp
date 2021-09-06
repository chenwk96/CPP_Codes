#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector<int> vec(10, 1);
    for (auto& x : vec) cout << x << endl;
    cout << sizeof(vec) << endl;
}