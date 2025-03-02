#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) {
        return 0; 
    }

    int i = 0; 
    for (int j = 1; j < nums.size(); j++) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
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
    int k = removeDuplicates(nums);
    cout << "Number of unique elements: " << k << endl;
    cout << "Array after removing duplicates: [";
    for (int i = 0; i < k; i++) {
        cout << nums[i];
        if (i < k - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}

