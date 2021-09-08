#include <iostream>

using namespace std;

/****************************
 * 函数原型
 * void* memcpy(void* dest, const void *src, size_t n);
 * 由src指向地址为起始地址的连续n个字节的数据复制到以destin指向地址为起始地址的空间内。
 * 在#include <string.h>里
 * 返回一个函数指针
 * src和dest所指内存区域不能重叠，函数返回的是dest的指针
 * 与strcpy相比，memcpy并不是遇到'\0'结束，而是一定会拷贝完n个字节
 * 但是标准memcpy()，对于地址重叠的情况，该函数的行为是未定义的
 * ***************************/

void* mymemcpy(void* dest, void* src, size_t n) {
    // 输入判断
    if (dest == src || n == 0) {
        return dest;
    }
    
    if (dest == nullptr || src == nullptr) {
        return nullptr;
    }

    char *pdest = (char*)dest;
    char *psrc = (char*)src;
    int cnt = n;

    // 内存拷贝
    // 自后向前，（目标地址比源地址比原地址高且与源空间重叠，如果自前向后拷贝会覆盖掉目标地址前面的内容）
    if (pdest > psrc && pdest < (psrc + cnt)) {
        pdest += (cnt - 1);
        psrc += (cnt - 1);
        while (cnt --) {
            *pdest -- = *psrc--;
        }
    } else { // 自前向后
        while (cnt --) {
            *pdest ++ = *psrc ++;
        }
    }

    return dest;
}

int main() {
    char buf[10] = "hello";
    mymemcpy(buf + 2, buf, 5);
    cout << buf << endl;
    char buf_2[10];
    cout << sizeof(buf) << endl;
    mymemcpy(buf_2, buf, sizeof(buf));
    cout << buf_2 << endl;
    return 0;
}
