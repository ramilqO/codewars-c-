#include <algorithm> // нужен для std::transform
#include <string> //для работы со строками
#include <iostream> // для ввода-вывода
#include <cctype> // для ::toupper

std::string makeUpperCase(std::string str) {
    std::transform(str.begin(), str.end(), str.begin(),
                   [](unsigned char c) { return std::toupper(c); });
    return str;
}

int main() {
    std::cout << makeUpperCase("Hello") << std::endl;
    return 0;
}
