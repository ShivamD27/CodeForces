// #include <bits/stdc++.h>
// using namespace std;

// void printNTimes(int c, int n)
// {
//     // character c will be printed n times
//     cout << char(n, c) << endl;
// }

// void solve(){

//     int n;cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }    
//     int i=n;
//     while(i>=0){
//         if(a[i] > 1){
//             // cout<<char(n,1)<<" ";
//             printNTimes(a[i],1);
//         }
//         i-=a[i];
//     }
// }

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         solve();
//     }
//     return 0;




// }



#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    // int a[n];
    vector <int> a(n);
    // cin>>a[n];
    vector <int> v(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x=0;
    for(int i=n-1;i>=0;i--){
        x=max(a[i],x);
        if(x>0){
            v[i]=1;
            x--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}