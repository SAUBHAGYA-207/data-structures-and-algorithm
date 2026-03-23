#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,c,k;
        cin>>n>>c>>k;
        vector<int> vec(n);
        for(int i=0;i<n;i++) cin>>vec[i];
        int used=0;
        for(int i=0;i<n;i++){
            if(vec[i]<c){
                used=max(k,c-k);
                k=k-used;
                c=c+vec[i]+used;
            }
            else if(vec[i]=c){
                c=c+vec[i];
            }
        }
        cout<<c<<endl;
    }
    return 0;
}