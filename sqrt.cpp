#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sqrt_bs(int n){
        int l =1;
        int h=n/2;
        int ans=0;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(mid*mid <=n){
                l=mid+1;
                ans=mid;
            }
            else{
            
                h=mid-1;
            }
        }
        return ans;
    }};
int main(){
    Solution obj;
    cout<<obj.sqrt_bs(74);
    return 0;
}