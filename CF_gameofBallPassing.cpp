#include <bits/stdc++.h>
using namespace std;
#define ll long long



int main(){
    int t;
    cin>>t;
    while(t--){
        // solve();
    ll n;
    cin>>n;
    ll a[n];
    ll mx=-1;
    ll sum=0;
    ll ans=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mx=max(mx,a[i]);
        sum+=a[i];
    }
    if(sum==0){
        cout<<0<<endl;
        continue;
    }
    sum-=mx;
    if(sum>=mx-1){
        // cout<<1<<endl;
        ans=1;
    }
    else{
        ans=1+(mx-1-sum);
    }
    cout<<ans<<endl;

    }

    return 0;
}