#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]==s[i-1]){
            cout<<s[i]<<endl;
        }
    }
}