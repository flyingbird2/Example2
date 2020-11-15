#include <iostream>

void swap(int *x, int *y) {
    int t = 0;
    t = *x;
    *x = *y;
    *y = t;
}

int main() {
    int a = 1;
    int b = 42;
    swap(&a, &b);
    std::cout << "Hello, QHF World!" << std::endl;
    return 0;
}