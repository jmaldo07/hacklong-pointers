// Name: Jonathan Maldonado
// id: 880640412
#include <iostream>
#include <string>
#include <cstdint>

void double_it (int& x) {
    x *= 2;
    std::cout << "x is " << x << "\n";
}

void double_it_pointer (int* x) {
    std::uintptr_t y = reinterpret_cast<std::uintptr_t>(x);
    *x *= 2;
    std::cout << "x is " << *x << "\n";
}

int main () {
    int value[] {5, 7, 13, 19, 23};
    std::cout << "value is " << value[0] << "\n";\
    double_it_pointer(value);
    std::cout << "value is " << value[0] << "\n";
}