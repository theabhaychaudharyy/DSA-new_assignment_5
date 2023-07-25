#include <iostream>
#include <vector>
#include <cmath>

int distanceValue(const std::vector<int>& arr1, const std::vector<int>& arr2, int d) {
    int count = 0;

    for (int i = 0; i < arr1.size(); i++) {
        bool found = true;

        for (int j = 0; j < arr2.size(); j++) {
            if (abs(arr1[i] - arr2[j]) <= d) {
                found = false;
                break;
            }
        }

        if (found) {
            count++;
        }
    }

    return count;
}

int main() {
    std::vector<int> arr1 = {4, 5, 8};
    std::vector<int> arr2 = {10, 9, 1, 8};
    int d = 2;

    int result = distanceValue(arr1, arr2, d);

    std::cout << "Distance Value: " << result << std::endl;

    return 0;
}
