#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
    int size=nums.size();
    vector<int> leader;
     int lead=INT_MIN;
    for(int i=size-1;i>=0;i--){
       
        if(lead!=max(lead,nums[i])){
            lead=max(lead,nums[i]);
            leader.push_back(lead);
        }
    }
    reverse(leader.begin(), leader.end());
    return leader;
    }
};
int main() {
    vector<int> arr = {-3, 4, 5, 1, -4, -5};

    Solution obj;
    vector<int> res = obj.leaders(arr);

    for (int x : res) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}