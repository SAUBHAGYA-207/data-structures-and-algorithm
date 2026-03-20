#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void insertion_sort(vector<int> &nums){
        for(int i=1;i<nums.size();i++){
            int j=i-1;
            int key=nums[i];
            while(j>=0 && nums[j]>key){
                nums[j+1]=nums[j];
                j--;
            }
            nums[j+1]=key;
            
        }
    }
};
int main() {
    vector<int> nums = {2,4,3,5,6,1,7,22};
    Solution obj;
    obj.insertion_sort(nums);

    for (int a : nums) {
        cout << a << ",";
    }
}