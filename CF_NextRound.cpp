#include <bits/stdc++.h>
using namespace std;

void solve(){

    int n,k;
    cin>>n>>k;
    int a[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]=0){
            cout<<0<<endl;
            return;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]>=a[k-1]){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}


int main(){
    solve();
    

    return 0;
}