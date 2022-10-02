#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define pVec(v)           for(auto e:v)cout<<e<<" ";cout<<"\n"
#define rep(i,a,b)        for(int i=a;i<b;i++)

bool ispresent(int a[],int m,int n){
    for(int i=0;i<n;i++){

        if(m==a[i]){
            return true;
        }

    }
    return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int s;
        if(n%2==1){
            s=n/2+1;
        }
        else{
            s=(n/2);
        }
        vector <pair<int,int> > vt;
        while(s--){
            // int m;
            for(int i=s;i>0;i--){
                int m=a[i]%a[i-1];
                if(!ispresent(a,m,n)){
                    vt.push_back(make_pair(a[i] , a[i-1]));
                }
            }
        }
        for(auto e:vt){
            cout<<e.first<<" "<<e.second<<endl;
        }
        // cout<<endl;
    }

    return 0;
}