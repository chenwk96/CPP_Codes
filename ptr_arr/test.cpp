#include <iostream>

using namespace std;

int main() {
    char *a = "chenwenkai";
    char b[10];
    int arr[10];
    cout << sizeof (char *) << endl;
    cout << sizeof(a) << endl;
    cout << sizeof(b[9]) << endl;
    cout << sizeof(arr[1]) << endl;
    return 0;
}