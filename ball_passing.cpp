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
        int ans=1;
        int l=0;
        unordered_map<int ,int> mp;
        mp[0]++;
        for(int i=0;i<n;i++){
            if(s[i]=='R'){
            l++;
            mp[l]++;
            }
            else l--;
        }
        cout<<mp.size()<<endl;
    }
    return 0;
}