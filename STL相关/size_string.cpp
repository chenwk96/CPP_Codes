#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout << sizeof(str) << endl;

    string str1 = "abcdndssasdadjak";
    cout << str1.size() << endl;
    cout << str1.capacity() << endl;
    str1.push_back('a');
    cout << str1.size() << endl;
    cout << str1.capacity() << endl;
    cout << sizeof(str1) << endl;
    return 0;
}