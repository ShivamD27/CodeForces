#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int k;
    cin>>k;
    if(k==0){
        cout<<0<<endl;
        break;
    }
    int n=12;
    int a[12];
    for(int i=0;i<12;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int cnt=1;
    int ans=a[11];
    for(int i=12;i>0;i--){
        if(ans > k){
            cout<<cnt<<endl;
            break;
        }
        else{
            ans+=a[i];
            cnt++;
        }
    }
    // cout<<cnt<<endl;

    return 0;
}