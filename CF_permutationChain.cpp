#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int res=0;
    if(m>=n){
        res+=(n/2)*m;
        if(n%2==1){
            res+=(m/2);
        }
    }
    else{
        res+=(m/2)*n;
        if(m%2==1){
            res+=(n/2);
        }
    }
    cout<<res<<endl;
    return 0;
}