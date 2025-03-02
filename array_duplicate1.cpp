#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) {
        return 0; 
    }

    unordered_set<int> seen; 
    int index = 0; 

    for (int i = 0; i < nums.size(); i++) {
        
        if (seen.find(nums[i]) == seen.end()) {
            seen.insert(nums[i]);
            nums[index] = nums[i];
            index++; 
        }
    }

    
    return index;
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

