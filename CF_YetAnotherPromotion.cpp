#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll a,b,n,m;
    cin>>a>>b>>n>>m;
    ll sum=(m+1);
    ll remainder=(n%sum);
    
    ll ans = (a*m*(n/sum)) + (min(remainder*a, remainder*b));
    ll res = min(a*n,b*n);
    cout<<min(ans,res)<<endl;

}

int main(){
    ll tt;
    cin>>tt;
    while(tt--){
        solve();
    }
    return 0;
}
