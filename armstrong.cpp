#include <bits/stdc++.h>
using namespace std;
bool isarmstrong(int k){
int sum=0,l,n;
n=k;
l=to_string(k).length();
while(n>0){
    int d=n%10;
    sum+=pow(d,l);
    n=n/10;
}
return sum==k;
}
int main(){
    cout<<isarmstrong(152);
    return 0;
}