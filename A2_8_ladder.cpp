#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;
    int count=0;
    while(n){
        // if(n[i]==4 )     
        if(n%10==4 || n%10==7){
            count++;
        }
        n=n/10;
    }
    if(count==4 ||count==7 || count==47 || count==74||count==44){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    // while(true){
    //     n
    // }
    return 0;
}