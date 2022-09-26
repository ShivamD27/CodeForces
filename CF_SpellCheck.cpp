#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    string s1="Timur";
    cin>>s;
    vector <int> v(5,0);

    if(n==5){
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                if(s[i]==s1[j]){
                    v[j]=1;
                    break;
                }
            }
        }
        int flag=0;
        for(int i=0;i<5;i++){
            if(v[i]==1){
                flag=0;
            }
            else{
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}