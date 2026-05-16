#include <bits/stdc++.h>
using namespace std;
# include <cmath>
int main() {
    int t;
    cin >> t;

    while (t--) {
        int a,n;
        vector<int> vec(n);
        cin>>a>>n;
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        int mini=INT_MAX,maxi=INT_MIN;
        for(int i=0;i<n;i++){
            mini=min(mini,vec[i]);
            maxi=max(maxi,vec[i]);
        }
        int digit=0;
        if(a!=0){
        digit=log10(a)+1;
    }
        else a=1;
        int min_num=((pow(10,digit)-1)*mini)/9;
        int max_num=(pow(10,digit)-1)*maxi/9;
        int c1=abs(a-min_num);
        int c2=abs(a-max_num);
        cout<<min(c1,c2)<<endl;
    }
    return 0;
}