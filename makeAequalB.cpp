#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    // map <int,int> mp1,mp2;
    int c1=0;
    int c2=0;
    for(int i=0;i<n;i++){
        cin>>a[i];   
        if(a[i]==1)c1++;
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        if(b[i]==1){
            c2++;
        }
    }
    int flag=0;
    for(int i=0;i<n;i++){
        int diff=b[i];
        if(a[i]!=diff){
            flag++;
            // break;
        }                        
    }
    if(n==1){
        if(flag==0) cout<<0<<endl;
        else cout<<1<<endl;
        return;
    }
    if(c1==c2){
        if(flag==0)cout<<0<<endl;
        else cout<<1<<endl;
    }
    else{
        int ans=abs(c1-c2);
        if(ans == flag)cout<<ans<<endl;
        else cout<<(ans+1)<<endl;

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