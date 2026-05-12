#include <iostream>
#include <string>

std::string fakeBin(std::string str) {
    std::string result;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] < '5') { result.push_back('0'); }
        if (str[i] > '5') { result.push_back('1'); }
    }

    return result;
}

int main() {
        std::cout << fakeBin("117128717287823049") << std::endl;

    return 0;
}
