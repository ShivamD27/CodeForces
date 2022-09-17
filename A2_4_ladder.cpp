
#include<bits/stdc++.h>
#include <iostream>
// #include <cmath>

using namespace std;
#define tt 					int T;cin>>T;while(T--)
#define ll					long long 
#define pb 					push_back
#define rep(i,a,b)      	for(int i=a;i<b;i++)
#define maxx 				1000000007

int main(){
  string s;
  cin>>s;
  string ans;
  for(int i=0;i<s.size();i++){
    if(s[i]=='.'){
      ans+='0';      
    }
    else if(s[i]=='-'){
      if(s[i+1]=='.'){
        ans+='1';
      }
      else if(s[i+1]=='-'){
        ans+='2';
      }
      i++;                             //ithech pahije , khali nahi 
    }
    // i++;
  }
  cout<<ans<<endl;
  return 0;
  // cout<<s<<endl;
}

