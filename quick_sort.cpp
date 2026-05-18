#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void quick_sort(vector<int>& nums, int l, int h) {
        if (l < h) {
            int pivot = nums[h];
            int i = l - 1;

            for (int j = l; j < h; j++) {
                if (nums[j] < pivot) {
                    i++;
                    swap(nums[i], nums[j]);
                }
            }
            swap(nums[i + 1], nums[h]);
            int pi = i + 1;
            quick_sort(nums, l, pi - 1);
            quick_sort(nums, pi + 1, h);
        }
    }
};

int main() {
    vector<int> nums = {2, 4, 3, 5, 6, 1, 7, 22};
    Solution obj;

    obj.quick_sort(nums, 0, nums.size() - 1);

    for (int a : nums) {
        cout << a << " ";
    }
}
