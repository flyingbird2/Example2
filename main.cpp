#include <iostream>

void swap(int *x, int *y) {
    int t = 0;
    //就是将地址里面的值取出来
    t = *x;
    *x = *y;
    *y = t;
}


/*int main() {
    int a = 1;
    int b = 42;
    //&是获取地址的意思
    swap(&a, &b);
    std::cout << "Hello, QHF World!" << std::endl;
    return 0;
}*/

int main() {
    bool isAlpha;
    isAlpha = false;
    if (!isAlpha) {
        std::cout << "isAlpha=" << isAlpha << std::endl;
        std::cout << std::boolalpha <<
                  "isAlpha = " << isAlpha << std::endl;
    }
    return 0;
}
