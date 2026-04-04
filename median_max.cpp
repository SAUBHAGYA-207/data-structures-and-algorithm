#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(3*n + 1);
        int a=1;
        for(int i=3*n;i>0;i--){
            if(i%3==0) vec[i]=i;
            else if(i%3==1) vec[i]=i;
            else{ vec[i]=a;
                a++;
            }
        for(int i=1;i<=3*n;i++){
            cout<<vec[i]<<" ";  

        } 
    }
    return 0;
}