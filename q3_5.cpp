#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> sortedSquares(const std::vector<int>& nums) {
    int n = nums.size();
    std::vector<int> result(n);

    int left = 0;
    int right = n - 1;
    int i = n - 1;

    while (left <= right) {
        int leftSquare = nums[left] * nums[left];
        int rightSquare = nums[right] * nums[right];

        if (leftSquare > rightSquare) {
            result[i] = leftSquare;
            left++;
        } else {
            result[i] = rightSquare;
            right--;
        }

        i--;
    }

    return result;
}

int main() {
    std::vector<int> nums = {-4, -1, 0, 3, 10};

    std::vector<int> result = sortedSquares(nums);

    std::cout << "Sorted Squares: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
