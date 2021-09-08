#include <string.h>
#include <iostream>

using namespace std;

int main() {
    char buff[10] = {'H', 'e', 'l', 'l', 'o', '\0', 'c', 'w', 'k', '\0'};
    cout << "sizeof(buff): " << sizeof(buff) << endl;
    cout << "strlen(buff): " << strlen(buff) << endl;
    char buff1[10];
    char buff2[10];
    memcpy(buff1, buff, 10);
    strcpy(buff2, buff);
    cout << buff1 << endl;
    cout << buff1 + 6 << endl;
    cout << buff2 << endl;
    cout << buff2 + 6 << endl;
    return 0;
}