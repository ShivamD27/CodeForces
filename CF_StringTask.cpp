#include <bits/stdc++.h>
using namespace std;
#define ll long long

// void isvovel(string s){
//     if(s[])
// }

int main(){
    string s;
    cin>>s;
    string s1="";
    int n=s.length();
    for(int i=0;i<=n;i++){
        if(s[i]=='A' || s[i]=='O' || s[i]=='Y' || s[i]=='E' || s[i]=='U' || s[i]=='I' || 
        s[i]=='a' || s[i]=='o' || s[i]=='y' || s[i]=='e' || s[i]=='u' || s[i]=='i'){
            continue;
        }
        else{
            // s[i]=s[i]-32;
            // cout<<"."<<tolower(s[i]);
            s1+='.';
            s1+=s[i];

        }
    }
    // cout<<?
    for(int i=0;i<n;i++){
        cout<<s1[i];
    }

    return 0;
}