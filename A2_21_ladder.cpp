#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[4];
    int n=4;
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    int count=0;
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         if(a[i]==a[j]){
    //             count ++;
    //         }
    //     }
    // }
    // cout<<count - 1 <<endl;

    // set <int> s;
    // for(int i=0;i<n;i++){
    //     s.insert(a[i]);
    // }
    // int a=s.size();

    // cout<<4-a<<endl;

    sort(a,a+4);
    for(int i=0;i<3;i++){
        if(a[i]==a[i+1]){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}