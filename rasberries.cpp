#include <bits/stdc++.h>
using namespace std;
# include <cmath>
int main() {
    int t;
    cin >> t;

    while (t--) {
        int a,n;
        
        cin>>n>>a;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        int rem=INT_MAX,count_2=0;
        for(int i=0;i<n;i++){
            if(a==4) count_2+=(1 - vec[i]%2);
            rem=min(rem,(a - vec[i]%a)%a);
        }
        if(a==4){
          if(count_2>1) cout<<min(0,rem)<<endl;
          else if(count_2==1) cout<<min(1,rem)<<endl;
          else cout<<min(2,rem)<<endl;
        }
        else{
        cout<<rem<<endl;
        }
    }
    return 0;
}