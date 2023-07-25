int arrangeCoins(int n) {
    long left = 0;
    long right = n;
    long stairs = 0;

    while (left <= right) {
        long mid = left + (right - left) / 2;
        long coinsNeeded = mid * (mid + 1) / 2;

        if (coinsNeeded <= n) {
            stairs = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return stairs;
}

int main() {
    int n = 5;
    int result = arrangeCoins(n);
    std::cout << "Number of complete rows: " << result << std::endl;

    return 0;
}