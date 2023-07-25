#include <iostream>
#include <vector>
#include <unordered_set>

std::vector<std::vector<int>> findDisappearedNumbers(const std::vector<int>& nums1, const std::vector<int>& nums2) {
    std::unordered_set<int> set1(nums1.begin(), nums1.end());
    std::unordered_set<int> set2(nums2.begin(), nums2.end());

    std::vector<int> distinct_nums1;
    std::vector<int> distinct_nums2;

    for (int num : nums1) {
        if (set2.find(num) == set2.end()) {
            distinct_nums1.push_back(num);
        }
    }

    for (int num : nums2) {
        if (set1.find(num) == set1.end()) {
            distinct_nums2.push_back(num);
        }
    }

    return {distinct_nums1, distinct_nums2};
}

int main() {
    std::vector<int> nums1 = {1, 2, 3};
    std::vector<int> nums2 = {2, 4, 6};

    std::vector<std::vector<int>> answer = findDisappearedNumbers(nums1, nums2);

    std::cout << "[";
    for (int num : answer[0]) {
        std::cout << num << ",";
    }
    std::cout << "], [";
    for (int num : answer[1]) {
        std::cout << num << ",";
    }
    std::cout << "]" << std::endl;

    return 0;
}
