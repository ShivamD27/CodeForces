#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int a[n];
    // int min/
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int min=a[0];
    int max=a[0];
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]<min){
            count++;
            min=a[i];
        }
        if(a[i]>max){
            count++;
            max=a[i];
        }
    }
    cout << count << endl;

    
    return 0;
}