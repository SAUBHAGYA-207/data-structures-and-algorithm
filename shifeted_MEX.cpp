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
        sort(vec.begin(), vec.end());
        vec.erase(unique(vec.begin(), vec.end()), vec.end());
        int longest=0;
        int curr=0;
        for(int i=0;i<n;i++){
            if(i==0 || (vec[i] !=vec[i-1]+1)){
                curr=0;
            }
            curr++;
            longest=max(curr,longest);
        }
        cout<<longest<<"\n";
    }
        return 0;
    }