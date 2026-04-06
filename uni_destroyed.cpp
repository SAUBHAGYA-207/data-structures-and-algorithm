#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++) cin>>vec[i];
        int count_z=0;
        for(int i=1;i<n-1;i++){
            if(vec[i]==0) count_z++;
        }
        int snaps=count_z+1;
        if(vec[0]==0) snaps--;
        if(vec[n-1]==0) snaps--;
        cout<<snaps<<endl;
    return 0;
    }