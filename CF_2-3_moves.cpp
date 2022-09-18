#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>>n;
    if(n==1){
        cout<<'2'<<endl;
        return;
    }
    if(n%3==0){
        cout<<(n/3)<<endl;
    }
    else if(n%3==1){
        cout<<(n/3) + 1<<endl;                
    }
    else{
        cout<<(n/3 + 1)<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}