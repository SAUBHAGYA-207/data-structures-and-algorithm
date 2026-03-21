#include <bits/stdc++.h>
using namespace std;
class solution{
    public:
    int consecone(int arr[],int n){
        int last=0,curr=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                curr++;
            }
            else{
                if(last>curr){
                    curr=0;
                }
                else{
                    last=curr;
                    curr=0;
                }
            }
        }
    return max(last,curr);
    }
};
int main(){
    int arr[]={1,1,1,0,0,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    solution obj;
    cout<<obj.consecone(arr,size);
    return 0;
}