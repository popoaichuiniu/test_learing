#include <iostream>
void foo() {
    std::cout << "foo" << std::endl;
}
void foo(int c) {
    std::cout << "foo" << c << std::endl;
}
int main() {
    std::cout << "zms" << std::endl;
    foo();
    foo(2);
    return 0;
}