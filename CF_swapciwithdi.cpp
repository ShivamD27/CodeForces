#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>>n;
    vector<int> c(n),d(n);
    int maxx=c[0];
    for(int i=0;i<n;i++){
        cin>>c[i];
        maxx=max(maxx,c[i]);
    }
    int maxx2=d[0];
    for(int i=0;i<n;i++){
        cin>>d[i];
        maxx2=max(maxx2,d[i]);
    }
    if(maxx2>=maxx){
        for(int i=0;i<n;i++){
            int a=c[i];
            if(d[i]<a){
                swap(d[i],c[i]);
            }
        }
        sort(c.begin(),c.end());
        cout<<maxx2*c[n-1]<<endl;

    }

    else{
         for(int i=0;i<n;i++){
            int b=d[i];
            if(c[i]<b){
                swap(d[i],c[i]);
            }
        }
        sort(d.begin(),d.end());
        cout<<maxx*d[n-1]<<endl;

    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
