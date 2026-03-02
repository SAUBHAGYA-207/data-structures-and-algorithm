#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void spiral(vector<vector<int>> &nums){
        int r=nums.size();
        int c=nums[0].size();
        int i=r-1,j=c-1;
        while((i!=(r+1)/2) && (j!=(c+1)/2) ){
            int a=0,b=0;
            while(a!=i+1 || b!=j+1){
                cout<<nums[a][b]<<",";
                b++;
            }
            while(a!=i+1 && b!=j+1){
                cout<<nums[a][b]<<",";
                a++;
            }
            while(a!=i+1|| b!=){
                cout<<nums[a][b]<<",";
                b--;
            }
            while(a!=i+1 || b!=j+1){
                cout<<nums[a][b]<<",";
                a--;
            }

            i--;
            j--;
        }
    }
};