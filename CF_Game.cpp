#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll id1=-1;
        ll id2=-1;
        for(ll i=0;i<n;i++){
            if(a[i]==1){
                id1=i;
            }
            else{
                break;
            }
        }
        for(ll i=n-1;i>=0;i--){
            if(a[i]==1){
                id2=i;
            }
            else{
                break;

            }
        }
        cout<<max(0LL,id2-id1)<<endl;

    }
    return 0;

}   