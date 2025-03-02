#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
     int n=arr.size();
        sort(arr.begin(),arr.end());
        reverse(arr.begin(),arr.end());
        int f=arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]<f)
            return arr[i];
        }
        return -1;
    }
};
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}
