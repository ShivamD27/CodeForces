#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        // cout<<n<<endl;
        int a=n-2;
        if(n>10){
            cout<<s[0]<<a<<s[n-1]<<endl;           
        }
        else{
            cout<<s<<endl;
        }
        // cout<<s[0]<<endl;
    }
}