// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// void solve(){
//     ll n;
//     cin>>n;
//     if(n%2==1){
//         cout<<"YES"<<endl;
//         return;
//     }
//     if(n==2){
//         cout<<"NO"<<endl;
//         return;
//     }
//     // if(n==1)
//     if(n%2==0){

//         for(ll i=3;i<=n;i+=2){
//             // cout<<i<<" ";
//             if(n%i==0){
//                 cout<<"YES"<<endl;
//                 return;
//             }
//             else{
//                 cout<<"NO"<<endl;
//                 return;
//             }
//         }
//     }
        
// }

// int main(){
//     ll t;
//     cin>>t;
//     while(t--){
//         solve();
//     }

//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        while(n%2==0){
            n=n/2;            
        }
        if(n==1){
            cout<<"NO"<<endl;

        }
        else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}