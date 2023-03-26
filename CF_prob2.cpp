#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll l,r,x,y,k;
    cin>>l>>r>>x>>y>>k;
    ll maxx=(r*y);
    ll minn=(l*x);
    if(k<=maxx && k>=minn){
        cout<<"YES"<<endl;

    }
    else{
        cout<<"NO"<<endl;
    }
}

int main(){
    // ll t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}
