#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string s;
    cin>>s;
    bool flag=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='H'){
            flag=1;
            break;
        }
        else if(s[i]=='Q'){
            flag=1;
            break;
        }
        else if(s[i]=='9'){
            flag=1;
            break;
        }
        // else if(s[i]=='!')
        else{
            continue;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


    return 0;
}