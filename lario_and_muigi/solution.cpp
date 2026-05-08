#include <vector>
#include <iostream>

std::vector<int> pipe_fix(const std::vector<int> &nums) {
    std::vector<int> result;

   for (int i = nums[0]; i <= nums[nums.size() - 1]; i++) {result.push_back(i);}

    return result;
}

int main() {
    std::vector<int> fixed = pipe_fix({1, 3, 5, 8, 22});

    std::cout << "[ ";
    for (int x : fixed) {
        std::cout << x << " ";
    }
    std::cout << "]" << std::endl;


    return 0;
}
