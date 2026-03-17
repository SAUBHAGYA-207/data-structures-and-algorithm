#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
             cin>>vec[i];
        }
        int maxi=INT_MIN;
        int streak=0;
        for(int i=0;i<n;i++){
            if(vec[i]==0){
                streak++;
            }
            else{
                maxi=max(maxi,streak);
                streak=0;
            }
        }
        maxi=max(maxi,streak);
        cout<<maxi<<endl;
    }
    return 0;
}