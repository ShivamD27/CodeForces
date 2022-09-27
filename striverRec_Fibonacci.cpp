//1. POWER SET
//2. RECURSSION

// 1. POWERSET
#include <bits/stdc++.h>
using namespace std;

vector <string> allpossiblestring(string s){
    // string s;
    // cin>>s;
    int n=s.length();
    vector <string> v;
    string sub="";

    for(int i=0;i<(1<<n);i++){
        for(int i=0;i<n;i++){
            if((i&(1<<i))==1){
                sub+=s[i];
            }
            if(sub.length() > 0){ 
                v.push_back(sub);
            }
        }
    }
    return v;
}

int main(){

    string s;
    cin>>s;
    vector <string> v =  allpossiblestring(s);
    for(auto it:v){
        cout<<it<<" ";
    }
    return 0;
}



//RECURSSION

#include <bits/stdc++.h>
using namespace std;

int f(int n){
    if(n<=1){
        return n;
    }
    int last=f(n-1);
    int slast=f(n-2);
    return (last+slast);
}

int main(){
    int n;
    cin>>n;
    cout<<f(n)<<endl;


    return 0;
}



