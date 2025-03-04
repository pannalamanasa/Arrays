#include <iostream>
#include <vector>
#include <algorithm>
int findMissingNumber(std::vector<int>& nums, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    int expected_sum = n * (n + 1) / 2;
    int missing = expected_sum - sum;
    return missing;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
    std::cout << findMissingNumber(nums, n) << std::endl;
    return 0;
}

