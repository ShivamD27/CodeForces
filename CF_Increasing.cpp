#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>>n;
    int a[n];
    map <int,int> mp;
    bool flag=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    if(n==1){
        cout<<"YES"<<endl;
        return;
    }
    for(auto &it:mp){
        if(it.second > 1){
            flag=1;
        }
    }
    if(flag==1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
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
