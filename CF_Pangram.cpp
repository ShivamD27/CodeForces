#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool flag=0;
    set <char> st;
    for(int i=0;i<n;i++){
        if(s[i]>='a' && s[i]<='z'){
            // st.insert(s[i]-'a');
            flag[s-'a']=1;
        }
        else{
            // st.insert(s[i]-'A');
            flag[s-'A']=1;
        }
    }
    // for(int i=0;i<n;i++){
    //     st.insert(s[i]-'a');
    // }
    // for(auto& ele:st){
    //     cout<<ele<<" ";
    // }
    if(st.size()>=25){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}