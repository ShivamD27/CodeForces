#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin>>n;
    int a[n];
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        if(a[i]!=a[i+1]){
            cnt++;
        }
    }
    cout<<(cnt+1)<<endl;

    return 0;
}