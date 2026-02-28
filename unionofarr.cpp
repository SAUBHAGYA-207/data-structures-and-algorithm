#include <bits/stdc++.h>
using namespace std;
vector<int> union_arr(int arr1[],int arr2[],int n,int m){
    map <int,int> freq;
    vector<int> un;
    for(int i=0;i<n;i++){
        freq[arr1[i]]++;
    }
    for(int i=0;i<m;i++){
        freq[arr1[i]]++;
    }
    for(auto &k:freq){
        un.push_back(k.first);
    }
    return un;
}
int main(){
    vector<int> v3;
    int v1[]={1,2,3,5,6,7};
    int v2[]={1,3,4,5,6};
    int sizeofarr1=sizeof(v1)/sizeof(v1[0]);
    int sizeofarr2=sizeof(v2)/sizeof(v2[0]);
    v3=union_arr(v1,v2,sizeofarr1,sizeofarr2);
    for(int k:v3){
        cout<<k<<",";
    }
    return 0;
}