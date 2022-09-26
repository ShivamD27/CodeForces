// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main(){
//     float n,k;
//     cin>>n>>k;
//     int sum=INT_MIN;
//     int cnt=0;
//     if(n==1 && k==1){
//         cout<<0<<endl;
//     }
//     else if(k==0){
//         cout<<ceil(n/2);
//     }
//     else{
//     for(int i=1;i<n;i++){
//         if(sum>=k){
//             break;
//         }
//         sum+=i;
//         cnt++;
//     }
//     // cout<<cnt<<endl;
//     cout<<(n-cnt)<<endl;
//     }
//     return 0;
// }



//corrrect approach  using BINARY SEARCH    

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,k;
    cin>>n>>k;
    ll i=0;
    ll j=n;
    while(i<=j){
        ll a=i+(j-i)/2;
        if((((n-a)*(n-a+1)/2)-a)==k){
            cout<<a<<endl;
            return 0;
        }
        else if((((n-a)*(n-a+1)/2)-a) < k){
            j=a-1;
        }
        else{
            i=a+1;
        }

    }

    return 0;
}




// using LINEAR SEARCH but TLE on test case 11

#include <bits/stdc++.h>
    using namespace std;
    #define ll long long

    int main(){
        ll n,k;
        cin>>n>>k;
        ll i=0;
        ll j=n;

        for(ll a = 0; a < n; ++a)
        {
            if((((n-a)*(n-a+1)/2)-a)==k){
                cout<<a<<endl;
                break;
            }
        }

        return 0;
    }