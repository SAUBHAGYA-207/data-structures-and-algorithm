#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
        void bubble_sort(vector<int> &nums){
            bool flag=false;
            for(int  i=0;i<nums.size()-1;i++){
                if(nums[i]>nums[i+1]){
                    swap(nums[i],nums[i+1]);
                    flag=true;
                }
            }
            if (flag){
                bubble_sort(nums);
            }
            else{
                return ;
            }

        }
};
int main() {
    vector<int> nums = {2,4,3,5,6,1,7,22};
    Solution obj;
    obj.bubble_sort(nums);

    for (int a : nums) {
        cout << a << ",";
    }
}