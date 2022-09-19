#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){

    int n;
    cin>>n;
    int res=0;
    res=(2*(n/2)+2*n);

    if(n%2==0){
        cout<<res<<endl;
    }    
    else{

        cout<<(res-1)<<endl;
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
