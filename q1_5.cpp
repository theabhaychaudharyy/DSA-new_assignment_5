#include <iostream>
#include <vector>

std::vector<std::vector<int>> convertTo2DArray(const std::vector<int>& original, int m, int n) {
    std::vector<std::vector<int>> result;

    if (m * n != original.size()) {
        return result;
    }

    for (int i = 0; i < m; ++i) {
        std::vector<int> row;
        for (int j = i * n; j < (i + 1) * n; ++j) {
            row.push_back(original[j]);
        }
        result.push_back(row);
    }

    return result;
}

int main() {
    std::vector<int> original = {1, 2, 3, 4, 5, 6};
    int m = 2;
    int n = 3;

    std::vector<std::vector<int>> result = convertTo2DArray(original, m, n);

    // Print the resulting 2D array
    for (const auto& row : result) {
        for (int element : row) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
