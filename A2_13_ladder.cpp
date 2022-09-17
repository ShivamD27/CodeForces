#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;cin>>n;
    int ans[101];
    if(n%2==1){
        cout<<-1<<endl;
    }
    else{
        for(int i=1;i<=n;i++){
            if(i%2==0){
                ans[i]=i-1;
            }
            else{
                ans[i]=i+1;
            }
        }
        for(int i=1;i<=n;i++){
            cout<<ans[i]<<" ";
        }
        // cout<<ans[n]<<endl;
    }

    
    return 0;

}