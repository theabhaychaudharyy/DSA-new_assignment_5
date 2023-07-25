#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> findOriginalArray(const std::vector<int>& changed) {
    std::vector<int> original;
    std::unordered_map<int, int> count;

    if (changed.size() % 2 != 0) {
        return original;  // If the size of changed is odd, it cannot be a doubled array
    }

    for (int num : changed) {
        count[num]++;
    }

    for (int num : changed) {
        if (count[num] == 0) {
            continue;  // Skip if the number has been used
        }

        if (count[num * 2] == 0) {
            return std::vector<int>();  // If the double of num does not exist, it is not a doubled array
        }

        original.push_back(num);
        count[num]--;
        count[num * 2]--;
    }

    return original;
}

int main() {
    std::vector<int> changed = {1, 3, 4, 2, 6, 8};

    std::vector<int> result = findOriginalArray(changed);

    std::cout << "Original array: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
