#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,m,a;
    cin>>n>>m>>a;
    int x,y;
    if(a>n && a>m) cout<<"1"<<endl;
    else{
    if(m%a==0){
        x=m/a;
    }
    else{
        x=(m/a)+1;
    }
    if(n%a==0){
        y=n/a;
    }
    else{
        y=(n/a)+1;
    }
    int ans=(x*y);
    cout<<ans<<endl;
    }

    return 0;
}