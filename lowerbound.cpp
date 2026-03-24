#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lowerbound(vector<int>& nums, int trgt) {
        int l = 0, h = nums.size() - 1;
        int ans = nums.size(); 

        while (l <= h) {
            int mid = l + (h - l) / 2;

            if (nums[mid] >= trgt) {
                ans = mid;
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return ans;
    }
};

int main() {
    vector<int> vec = {1,2,3,4,5,6,7,8,9};
    Solution obj;
    cout << obj.lowerbound(vec, 5);
    return 0;
}
