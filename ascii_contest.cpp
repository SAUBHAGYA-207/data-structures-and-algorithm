#include <bits/stdc++.h>
using namespace std;
int main(){
        int g,c,l;
        cin>>g>>c>>l;
        int maxi=max(max(g,c),max(c,l));
        int mini=min(min(g,c),min(c,l));
        if((maxi-mini)>=10){
            cout<<"check again"<<endl;;
        }
        else{
            cout<<"final "<<g+c+l-(maxi+mini)<<endl;
        }
    return 0;
}