#include <stdio.h>

typedef void(*Func)();

struct Base {
    Func _fun;
    int _b;
};

struct Derived {
    struct Base _B;
    int _d;
};


void fb_() {
    printf("_b : _fun()\n");
}

void fd_() {
    printf("_d : _func()\n");
}

int main() {
    struct Base b;
    struct Derived d;

    b._fun = fb_;
    d._B._fun = fd_;

    struct Base *p1 = &b;
    p1 -> _fun();

    p1 = (struct Base*)&d;
    p1 -> _fun();

    printf("sizeof(Base) = %d\n", sizeof(struct Base));
    
    getchar();

    return 0;
}
