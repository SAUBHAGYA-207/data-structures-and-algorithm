#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,h,l;
        cin>>n>>h>>l;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]<=max(h,l)){
                count++;
            }
        }
        int maxpairs=n/2;
        int possiblepairs=count/2;
        possiblepairs=min(maxpairs,possiblepairs);
        int actualpairs=0;
        for(int i=0;i<n;i++){
            if((arr[i]<=max(h,l)) && (arr[i]<=min(h,l)) ){
                actualpairs++;
            }
        }
        cout<<min(actualpairs,possiblepairs)<<"\n";



    }
    return 0;
}