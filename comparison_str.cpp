#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        stack<char> stk;
        int c=0;
        for(int i=0;i<n;i++){
            if(stk.empty() || stk.top()==s[i]){
                stk.push(s[i]);
            }
            else{
                while(!stk.empty() || stk.top()!=s[i]){
                    stk.pop();
                    c++;
                }
            }
        }
        cout<<n+1-c<<endl;

    }
    return 0;
}