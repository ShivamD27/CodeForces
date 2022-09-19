#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int x;
    cin>>x;
    int ans=0;
    ans+=x/5;
    // int rem=x%5;
    if(x<=5){
        cout<<1<<endl;
    }
    else if(x%5==0){
        cout<<ans<<endl;
    }
    else{
        cout<<(ans+1)<<endl;
    }

    return 0;
}