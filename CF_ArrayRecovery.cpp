// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define pVec(v)           for(auto e:v)cout<<e<<" ";cout<<"\n"
// #define rep(i,a,b)        for(int i=a;i<b;i++)

// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     rep(i, 0, n) {
//         cin >> v[i];
//     }
 
//     vector<int>a;
 
//     int sum = 0;
//     for (auto i : v) {
//         if (sum - i >= 0 && i) {
//             cout << "-1\n";
//             return;
//         }
//         sum += i;
//         a.push_back(sum);
//     }
//     pVec(a);
// }
// int main(){
//     ll t;
//     cin>>t;
//     while(t--){
//         solve();
//     }

//     return 0;
// }





//METHID 2


#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pVec(v)           for(auto e:v)cout<<e<<" ";cout<<"\n"
#define rep(i,a,b)        for(int i=a;i<b;i++)

void solve()
{
    int n;
    cin >> n;
    vector<int> d(n);
    rep(i, 0, n) {
        cin >> d[i];
    }
 
    // vector<int>a;
    int a[n];
    a[0]=d[0];
    for(int i=1;i<n;i++){
        int data=d[i];
        if((a[i-1]-data < 0) || (data==0)){
            // a.push_back(a[i-1]+data;
            a[i] = a[i-1] + data;
        }
        else{
            cout<<-1<<endl;
            return;
        }
    }


    pVec(a);
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}