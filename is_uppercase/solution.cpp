#include <iostream>
#include <cctype>

bool is_uppercase(const std::string s) {
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            continue;
        }

        if (islower(s[i])) {
            return false;
        }
    }

    return true;
}

int main() {
    is_uppercase("hello");
    return 0;
}

