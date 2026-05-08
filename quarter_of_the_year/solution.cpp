#include <iostream>

int quarter_of(int month) {
    if (month <= 0 || month > 12) {
        std::cerr << "month should be between 1 and 12" << std::endl;
        return -1;
    }

    if (month <= 3) { return 1; }
    if (month <= 6) { return 2; }
    if (month <= 9) { return 3; }

    return 4;
}

int main() {
    std::cout << quarter_of(9);

    return 0;
}
