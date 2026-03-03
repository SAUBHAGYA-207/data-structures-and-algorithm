#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> set_zero(vector<vector<int>> &nums ){
    unordered_map<int,int> mp;
    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums.size();j++){
            if(nums[i][j]==0){
                mp[i]=j;
            }
        }
    }
    for(auto  &x :mp){
        for(int i=x.first;i<nums.size();i++){
            nums[i][x.second]=0;
        }
        for(int i=x.second;i<nums.size();i++){
            nums[x.first][i]=0;
        }
    }
    return nums;
}

};