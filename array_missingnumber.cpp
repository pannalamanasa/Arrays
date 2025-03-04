#include <iostream>
#include <vector>
#include <algorithm>

int findMissingNumber(std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != i) {
            return i;
        }
    }
    return nums.size();
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
    std::cout << findMissingNumber(nums) << std::endl;
    return 0;
}

