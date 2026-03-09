#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(n+2);
        for(int i=1;i<=n;i++){
            cin>>vec[i];
        }
        vec[0]=vec[1];
        vec[n+1]=vec[n];
        int sum=0;
        int max_diff=0;
        for(int i=1;i<=n;i++){
            int temp=0;
            sum+=abs(vec[i]-vec[i-1]);
            int t=0;
            if(i>1 || i<n){
                t=abs(vec[i-1]-vec[i+1]);
            }
            temp=abs(vec[i]-vec[i-1])+abs(vec[i]-vec[i+1])-t;
            max_diff=max(max_diff,temp);

        }
        cout<<sum-max_diff<<"\n";

    }
    return 0;
}