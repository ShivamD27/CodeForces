#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,k;
    cin>>n>>k;
    int cnt=0;
    while(cnt!=k){
        if(n%10==0){
            n=n/10;
        }
        else{
            n=n-1;
        }
        cnt++;
    }
    cout<<n<<endl;

    return 0;
}