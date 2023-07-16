#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    if (a == b + c || b == a + c || c == a + b) {
        std::cout << "1" << std::endl;
    } else if (a == b * c || b == a * c || c == a * b) {
        std::cout << "2" << std::endl;
    } else {
        std::cout << "3" << std::endl;
    }

    return 0;
}
