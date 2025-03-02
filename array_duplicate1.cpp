#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) {
        return 0; // If the array is empty, return 0
    }

    unordered_set<int> seen; // Set to keep track of unique elements
    int index = 0; // Pointer to place the unique elements in the array

    for (int i = 0; i < nums.size(); i++) {
        // If the element is not in the set, it's unique
        if (seen.find(nums[i]) == seen.end()) {
            // Add it to the set and place it in the next available index
            seen.insert(nums[i]);
            nums[index] = nums[i];
            index++; // Move the index forward
        }
    }

    // The number of unique elements is the index value
    return index;
}

int main() {
    int n;

    // Take the input for the number of elements in the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);

    // Take the input for the elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Remove duplicates and get the number of unique elements
    int k = removeDuplicates(nums);

    // Output the result
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

