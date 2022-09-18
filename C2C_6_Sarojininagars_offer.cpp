#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        // cout<<"Enter string: "<<endl;
        cin>>s;
        map <int,int> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        // cout<<mp.size()<<endl;
        // for(int i=0;i<mp.size();i++){
        //     cout<<mp[i]<<endl;
        // }
        int ans=0;
        for(auto & i : mp){
            if(i.second%2==0){
                ans+=(i.second)/2;
            }
            else{
                ans+=(i.second)/2 + 1;
            }
        }
        cout<<ans<<endl;

    }

    return 0;
}