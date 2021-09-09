#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> vec1{1, 2, 3};
    vector<int> vec2{1, 2, 3};

    if (vec1 > vec2) {
        cout << "vec1 > vec2" << endl;
    } else if (vec1 < vec2) {
        cout << "vec1 < vec2" << endl;
    } else {
        cout << "vec1 == vec2" << endl;
    }

    return 0;
}