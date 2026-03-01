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
        unordered_map <int,int> mp;
        for(int i=0;i<n;i++){
            if(mp.find(vec[i])==mp.end()){
                mp[vec[i]]=1;
            }
            else{
                mp[vec[i]]++;
            }
        }
        int count;
        for (auto it : mp) {
        if(it.second%2==0){
            count++;
        }
    }
    cout<<count<<'\n';
    }
    return 0;
}