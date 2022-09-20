#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j*=3){
                if(i%3==0){                               //d==2 wala done in contest . this is for d=3; d=2 madhe j+=2 karaicha fakt
                    continue;
                }
                cout<<j<<" ";
                
            }
        }
        cout<<endl;

        // t++;
    }
}