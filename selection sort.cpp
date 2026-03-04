#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void selection_sort(vector<int> &nums, int start) {
        int end = nums.size() - 1;

        if (start >= end)
            return;
        int min_index = start;
        for (int i = start + 1; i <= end; i++) {
            if (nums[i] < nums[min_index]) {
                min_index = i;
            }
        }
        swap(nums[start], nums[min_index]); 
        selection_sort(nums, start + 1);
    }
};

int main() {
    vector<int> nums = {2,4,3,5,6,1,7,22};
    Solution obj;
    obj.selection_sort(nums, 0);

    for (int a : nums) {
        cout << a << ",";
    }
}