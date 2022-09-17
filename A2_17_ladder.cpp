#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    int cz=0,co=0,czz=0,coo=0;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        if(a[i]==0){
            cz++;
        }
        else{
            co++;
        }

        if(b[i]==0){
            czz++;
        }
        else{
            coo++;
        }
    }
    // for
    cout<<(min(cz,co) + min(czz,coo))<<endl;

    return 0;
}