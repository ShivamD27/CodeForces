#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool myComparator(pair<int,int> p1,pair<int,int> p2){
    return p1.second<p2.second;
}

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector <pair<string,int> > v;
    map <string,int> mp;
    for(int i=0;i<s.length();i++){
        mp[s]++;

    }
    for(auto &i:mp){
        v.push_back(make_pair(i.first,i.second));

    }
    sort(v.begin(),v.end(), myComparator);
    int siz=v.size();
    for(int i=0;i<siz;i++){
        // v.push_back(make_pair(i.first,i.second));
        cout<<v[v[1].first]

    }

    return 0;
}