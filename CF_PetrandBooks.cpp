#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<7;i++){
        cin>>a[i];
    }
    int cnt=0;
    bool flag=0;
    int s=n;
    // for(int i=0;i<7;i++){
    //     s=s-a[i];
    //     cnt++;
    //     if(s<=0){
    //         flag=1;
    //         break;
    //     }
    // }
    int i=0;
    while(true){
        s=s-a[i];
        //cnt++;
        if(s<=0){
            break;
        }
        i=(i+1)%7;

    }
    cout<<i+1<<endl;

    return 0;
}