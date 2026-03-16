#include <bits/stdc++.h>
using namespace std;
void swap_elem(int &i,int &j){
    i=i+j;
    j=i-j;
    i=i-j;
}
int main(){
    int nums[]={1,2,3,4,5};
    int size=sizeof(nums)/sizeof(nums[0]);
    for(int i=0;i<size-1;i++){
        swap_elem(nums[i],nums[i+1]);
    }
    for(int i=0;i<size;i++){
        cout<<nums[i]<<","<<endl;
    }
    return 0;
}