#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int insert_pos(vector<int> &nums,int trgt){
        int l=0;
        int h=nums.size()-1;
        
        int ans=nums.size();
        while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]>=trgt){
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }};
    int main() {
    vector<int> vec = {1,2,3,4,5,7,8,9};
    Solution obj;
    cout << obj.insert_pos(vec, 6);
    return 0;
}