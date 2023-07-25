#include <iostream>
#include <vector>
#include <cmath>

std::vector<int> findDuplicates(const std::vector<int>& nums) {
    std::vector<int> duplicates;

    for (int i = 0; i < nums.size(); i++) {
        int index = std::abs(nums[i]) - 1;

        if (nums[index] < 0) {
            duplicates.push_back(index + 1);
        } else {
            nums[index] = -nums[index];
        }
    }

    return duplicates;
}

int main() {
    std::vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};

    std::vector<int> result = findDuplicates(nums);

    std::cout << "Duplicates: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
