#include <bits/stdc++.h>
using namespace std;

void solve(){

   int n;cin>>n;
   string arr[3][n];
   map<string,int> mp;
   for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            mp[arr[i][j]]++;
        }
   }
   
   for(int i=0;i<3;i++){
    int p=0;
        for(int j=0;j<n;j++){
            
            if(mp[arr[i][j]]==1){
                p+=3;
            }
            else if(mp[arr[i][j]]==2){
                p+=1;
            }
            
        }
        cout<<p<<" ";
   }
   cout<<"\n";
}


int main(){
    int t;cin>>t;
    while(t--){
    solve();

    }
    

    return 0;
}