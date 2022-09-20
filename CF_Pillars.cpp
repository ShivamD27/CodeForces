#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;cin>>n;
    int a[n];
    int k;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i] ==  n){
            k=i;
        }
    }
    
    int z;
    bool flag=0;
    for(int i=0;i<k;i++){
        if(a[i]<a[i+1]){
            continue;
        }
        else{
            // z=i;
            flag=1;
        }
    }
    for(int i=k;i<n-1;i++){
        if(a[i] > a[i+1]){
            continue;
        }
        else{
            flag=1;
        }
    }
    if(flag==1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

    return 0;
}