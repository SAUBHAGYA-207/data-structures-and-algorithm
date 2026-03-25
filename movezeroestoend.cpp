#include <bits/stdc++.h>
using namespace std;
vector<int> zeroestoend(vector<int> &nums){
    int i=0;
    for(int j=0;j<nums.size();j++){
        if(nums[j]>0){
            nums[i]=nums[j];
            i++;
        }
    }
    for(int k=i+1;k<nums.size();k++){
        nums[k]=0;
    }
    return nums;
}
int main(){
    vector<int> nums={1,2,3};
    vector<int> new_arr=zeroestoend(nums);
    for(int k:nums){
        cout<<k<<",";
    }
    return 0;
}