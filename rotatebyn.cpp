#include <bits/stdc++.h>
using namespace std;
void reverse_arr(vector<int> &vec,int s,int e){
    while(s<e){
        swap(vec[s],vec[e]);
        s++;
        e--;
    }
}
vector<int> rotateLbyn(vector<int> &vec,int n){
    reverse_arr(vec,0,n-1);
    reverse_arr(vec,n,vec.size()-1);
    reverse_arr(vec,0,vec.size()-1);
    return vec;
}
int main(){
    vector<int> vec={0,1,2,3,4,5};
    vec=rotateLbyn(vec,2);
     for (int num : vec) {
        cout << num << " ";
    }
    return 0;
}