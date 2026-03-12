#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        unordered_map<char,int> mp_s,mp_t;
        for(int i=0;i<n;i++){
            mp_s[s[i]]++;
            mp_t[t[i]]++;
        }
        int flag=1;
        for(int i=0;i<n;i++){
            flag*=mp_s[s[i]]==mp_t[s[i]];
            if(flag==0){
                cout<<"NO"<<endl;
                break;
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }

    }
    return 0;
}