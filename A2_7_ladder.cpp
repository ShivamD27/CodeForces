#include <bits/stdc++.h>
using namespace std;


//SHIVAM

int main(){
    string s;
    cin>>s;
    int cntupper=0; int cntlower=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>='A' &&  s[i]<='Z'){
            cntupper++;
        }
        else{
            cntlower++;
        }
    }

    if(cntupper > cntlower){
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' &&  s[i]<='z'){
                s[i]-=32;
            }
        }
    }
    else{
         for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]+=32;
            }
        }        
    }
    cout<<s<<endl;


    // int a=max(cntupper,cntlower);
    // if(a=cntlower){
    //     transform(s.begin(), s.end(), s.begin(), ::toupper);
    //     cout << s << endl;
    // }
    // else{
    //     transform(s.begin(), s.end(), s.begin(), ::tolower);
    //     cout << s << endl;
    // }

    return 0;
}


