#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int n;cin>>n;
    int a[n];
    double sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        // cout<<"LODa";
    }
    double ans=(sum/(n*100)*100);
    // cout<<"Shivam";
    cout<<ans<<endl;


    return 0;
}