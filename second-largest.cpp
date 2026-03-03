#include <bits/stdc++.h>
using namespace std;
int second_largest(int arr[],int n){
    int largest,second_largest;
    if(n>2){

    largest=max(arr[0],arr[1]);
    second_largest=min(arr[0],arr[1]);
    for(int i=2;i<n;i++){
        if(largest<arr[i] && second_largest<arr[i]){
            second_largest=largest;
            largest=arr[i];
        }
        else if(largest>arr[i] && second_largest<arr[i]){
            second_largest=arr[i];
        }
    }
    if(largest!=second_largest){
        return second_largest;
    }
}
else{
    return -1;
}
return 0;

}
int main(){
    int arr[]={1};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<second_largest(arr,size);
}