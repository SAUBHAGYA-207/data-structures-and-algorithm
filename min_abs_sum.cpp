#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<long long> a(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=1;i<n-1;i++){
            if(a[i]==-1) a[i]=0;
        }
        if(a[0]==-1){
            if(a[n-1]==-1)
                a[0]=0;
            else
                a[0]=a[n-1];
        }
        if(a[n-1]==-1){
            a[n-1]=a[0];
        }

        long long ans = abs(a[n-1]-a[0]);

        cout<<ans<<"\n";

        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }

        cout<<"\n";
    }
}