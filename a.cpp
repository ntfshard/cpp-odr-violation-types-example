#include <iostream>

struct A {
    A() {a = 42; b = 34;}
    int a;
    int b;
};

void a() {
    A a;
    std::cout << a.a << std::endl;
}

