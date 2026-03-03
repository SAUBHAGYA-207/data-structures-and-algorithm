#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    void sortzeores(int* arr,int n){
        int j=0;
        for(int k=0;k<3;k++){
        for(int i=0;i<n;i++){
            if(arr[i]==k){
                swap(arr[i],arr[j]);
                j++;
            }
        }
    }}
};
int main(){
    int arr[]={0,1,1,0,2,2,2,0,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    solution obj;
    obj.sortzeores(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<",";
    }

    return 0;
}