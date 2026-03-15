#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void civil(int n){
        if(n>3){
            cout<< n%2<<endl;
        }
        else if(n==2){
            cout<< 2<<endl;
        }
        else if(n==3){
            cout<< -1<<endl;
        }
    }};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Solution obj;
        obj.civil(n);
    }
    return 0;
}