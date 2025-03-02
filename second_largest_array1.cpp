#include <iostream>
#include <climits>
using namespace std;

int findSecondLargest(int arr[], int n) {
    if (n < 2) return -1; 

    int largest = INT_MIN, second_largest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;  
            largest = arr[i];          
        } else if (arr[i] > second_largest && arr[i] < largest) {
            second_largest = arr[i];   
        }
    }
    if (second_largest == INT_MIN) {
        return -1;
    }

    return second_largest;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " positive integers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int result = findSecondLargest(arr, n);
    cout << "Second largest element is: " << result << endl;

    return 0;
}

