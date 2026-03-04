#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rotated_bs(vector<int> &nums,int trgt){
        int l=0,h=nums.size()-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]==trgt){
                return mid;
            }
            if(nums[l]<=nums[mid]){
                if(trgt>=nums[l] && nums[mid]>trgt){
                    h=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            else{
                if(nums[mid]<trgt && nums[h]>=trgt){
                    l=mid+1;
                }
                else{
                    h=mid-1;
                }
            }
        }
        return -1;
    }    
};
int main() {
    vector<int> vec = {7, 8, 1, 2, 3, 3, 3, 4, 5, 6};
    Solution obj;
    cout << obj.rotated_bs(vec, 2);
}