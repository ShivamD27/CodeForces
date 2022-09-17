#include<bits/stdc++.h>
#include <iostream>
// #include <cmath>

using namespace std;
#define tt 					int T;cin>>T;while(T--)
#define ll					long long 
#define pb 					push_back
#define rep(i,a,b)      	for(int i=a;i<b;i++)
#define maxx 				1000000007

int  main(){
  int n,t;
  cin>>n>>t;
  string s;
  cin>>s;
  for(int i=0;i<t;i++){
    for(int j=n-1;j>=0;j--){
      if(s[j]=='G' && s[j-1]=='B'){
        swap(s[j],s[j-1]);
        j--;                                        //remember. nanter chya few test cases la probllem yeil if we not include it
      }
    }
    
  }
  
  cout<<s<<endl;
  // for(int i=0;i<n;i++){
  //   cout<<s[i];
  // }
}
