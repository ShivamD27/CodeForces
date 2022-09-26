#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int s=0;
    cin>>n;
    while(n--){
        int a[n];
        int ans=0;
        // int s=0;
        for(int i=0;i<3;i++){
            cin>>a[i];
            if(a[i]==1){
                ans++;
            }
        }
        if(ans>1){
            s++;
        }
        // cout<<s<<endl;
    }
    cout<<s<<endl;

    return 0;
}
