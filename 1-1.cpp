#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int streak=0;
        int max_count=0;
        for(int i=1;i<n-1;i++){
            if((s[i-1]=='1' && s[i+1]=='1' && s[i]=='0') || s[i]=='1' ){
                max_count++;
            }
        }
        cout<<max_count<<endl;
    }
    return 0;
}