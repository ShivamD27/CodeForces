#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1){
        cout<<1<<endl;
        return;
    }
    int maxind=0;
    int maxval=a[0];
    for(int i=1;i<n;i++){
        if(a[i] > maxval){
            maxind=i;
            maxval=a[i];

        }
    }
    cout<<maxind+1<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}