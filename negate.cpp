#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++) cin>>vec[i];
        int maxi=*max_element(vec.begin(),vec.end());
        for(int i=0;i<n;i++){
            if(vec[i]!=maxi) vec[i]*=-1;
        }
        int long long sum=0;
        for(int i=0;i<n;i++){
            sum+=vec[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}