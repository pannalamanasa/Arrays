#include <iostream>
#include <vector>
using namespace std;

bool checkRotatedAndSorted(const vector<int>& nums) {
    int countDecreases = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        if (nums[i] > nums[(i + 1) % n]) {
            countDecreases++;
        }
    }
    return countDecreases <= 1;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    if (checkRotatedAndSorted(nums)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}

