#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> arrangebysign(vector<int>& arr, int n) {
        vector<int> ans(n);
        int pos = 0, neg = 1;

        for (int i = 0; i < n; i++) {
            if (arr[i] >= 0) {
                ans[pos] = arr[i];
                pos += 2;
            } else {
                ans[neg] = arr[i];
                neg += 2;
            }
        }
        return ans;
    }
};

int main() {
    vector<int> arr = {10, -7, -5, 8, 11, -9};

    Solution obj;
    vector<int> res = obj.arrangebysign(arr, arr.size());

    for (int x : res) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
