#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> str(n);
        for(int i=0;i<n;i++){
            cin>>str[i];
        }
        string s2="";
        string s1="";
        string s="";
        for(int i=0;i<n;i++){
            s1=s+str[i];
            s2=str[i]+s;
            int j=0;
            while(s1[j]==s2[j]){
                j++
            }
            if(s1[j]>s2[j]){
                s=s2;
            }
            else{
                s=s1;
            }
            
        }
        cout<<s<<"\n";
    }
    return 0;
}