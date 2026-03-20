#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int kth_elem(vector<int> &num1,vector<int> num2,int k){
        int m=num1.size();
        int n=num2.size();
        if(m>n){
            return kth_elem(num2,num1,k);
        }
        else{
            int low=max(0,k-n);
            int high=min(k,m);
            while(low<=high){
                int mid1=low+(high-low)/2;
                int mid2=k-mid1;
                int l1=(mid1==0)? INT_MIN: num1[mid1-1];
                int l2=(mid2==0)?INT_MIN: num2[mid2-1];
                int r1=(mid1==n)? INT_MAX: num1[mid1];
                int r2=(mid2==m)? INT_MAX :num2[mid2];
                if (l1 <= r2 && l2 <= r1) {
                return max(l1, l2);
                }
                else if (l1 > r2) {
                high = mid1 - 1;
                }
                else {
                low = mid1 + 1;
                }



            }
            return -1;
        }
    }};
    int main() {
    vector<int> a = {2, 3, 6, 7, 9};
    vector<int> b = {1, 4, 8, 10};

    int k = 5;
    Solution sol;
    cout <<sol.kth_elem(a, b, k) << endl;

    return 0;
}