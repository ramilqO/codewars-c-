#include <iostream>
#include <ostream>
#include <vector>
#include <string>

template <typename T>

bool check(const std::vector<T>& sec, const T& elem) {
    for (int i = 0; i < sec.size(); i++) {
        if (sec[i] == elem) return true;
    }

    return false;
}