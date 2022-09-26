#include <bits/stdc++.h>

using namespace std;
#define ll long long

int  main(){
    double h,l;
    cin>>h>>l;
    double ans=((l*l)- (h*h))/(2*h);
    printf("%.13lf",ans);
    // cout<<ans<<endl;

    return 0;
}