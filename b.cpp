#include <iostream>

struct A {
    A() {a = 34;}
    int a;
};

void b() {
    A a;
    std::cout << a.a << std::endl;
}

