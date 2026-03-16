#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++) cin>>vec[i];
        int maxi=INT_MAX;
        int li=n;
        int ans=0;
        while(maxi!=vec[0]){
            int le=*max_element(vec.begin(),vec.begin()+li);
            ans++;
            for(int i=n-1;i>=0;i--){
                if(vec[i]==le){
                    li=max_element(vec.begin(),vec.begin()+li)-vec.begin();
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}