#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int bs(vector<int> &nums,int l,int h,int trgt){
        if(l<=h){
            int mid=l+(h-l)/2;
        if(trgt<nums[mid]){
            return bs(nums,l,mid-1,trgt);
        }
        else if(trgt>nums[mid]){
            return bs(nums,mid+1,h,trgt);
        }
        else{
            return mid;
        }
    }
    else{
        return -1;
    }

    }
};
int main(){
    vector<int> vec={1,2,3,4,5,6,7,8,9};
    Solution obj;
    cout<<obj.bs(vec,0,vec.size()-1,7);
    return 0;
}