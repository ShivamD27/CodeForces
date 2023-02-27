#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,l,r,k;
    cin>>n>>l>>r>>k;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    ll sum=0;
    ll cnt=0;
    for(ll i=0;i<n;i++){
        if(a[i]>=l && a[i]<=r){
            if(sum+a[i] <= k){
                sum+=a[i];
                cnt++;            
            }
            else{
                break;
            }
        }
    }
    cout<<cnt<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
