#include <iostream>

void swap(int *x, int *y) {
    int t = 0;
    //就是将地址里面的值取出来
    t = *x;
    *x = *y;
    *y = t;
}


int main_pointer() {
    int a = 1;
    int b = 42;
    //&是获取地址的意思
    swap(&a, &b);
    std::cout << "Hello, QHF World!" << std::endl;
    return 0;
}

int main_bool() {
    bool isAlpha;
    isAlpha = false;
    if (!isAlpha) {
        //输出的结果是0 或者1
        std::cout << "isAlpha=" << isAlpha << std::endl;
        std::cout << std::boolalpha <<
                  //输出的结果是true 或者false，不再是0或者1
                  "isAlpha = " << isAlpha << std::endl;
    }
    return 0;
}

int main3() {

    std::cout << static_cast<double>(1) / 2;
    std::cout << 1 / 2;
    return 0;
}

int main_type() {
    int x = {1};
    std::cout << x << std::endl;
    std::cout << 1.0 / 2. << std::endl;
    return 0;
}

int main() {
    main_type();
}


