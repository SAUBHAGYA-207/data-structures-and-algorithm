#include <bits/stdc++.h>
using namespace std;
class solution{
    public:
    int missing(int arr[],int n){
        int sum=0;
        for(int i=0;i<n-1;i++){
            sum+=arr[i];
        }
        int k=(n*(n+1)/2)-sum;
        return k;
    }
};
int main(){
    int arr[]={1,2,3,4,5,6,8};
    int n=(sizeof(arr)/sizeof(arr[0]))+1;
    solution obj;
    int a=obj.missing(arr,n);
    cout<<a<<endl;
    return 0;
}
