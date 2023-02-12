#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll x,y;
    cin>>x>>y;
    ll diff=(x-y);
    cout<<2*abs(diff)<<endl;
    for(ll i=y+1;i<x;i++){
        cout<<i<<" ";
    }
    for(ll i=x;i>=y;i--){
        cout<<i<<" ";
    }

}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();

    }
    return 0;
}
