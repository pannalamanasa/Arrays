#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largest(const vector<int>& arr) {
        int largest = arr[0];
        for (int i = 1; i < arr.size(); ++i) {
            largest = max(largest, arr[i]);
        }
        
        return largest;
    }
};

int main() {
    int t;
    cin >> t;
    cin.ignore(); 

    while (t--) {
        string input;
        getline(cin, input);
        
        stringstream s2(input);
        vector<int> arr;
        int num;
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.largest(arr) << endl;
        cout << "~" << endl;
    }

    return 0;
}

