#include <bits/stdc++.h>
using namespace std;

int main(){
    char str[105];
    cin>>str;
    int n=strlen(str);
    set <char> s;
    for(int i=0;str[i]!='\0';i++){
        s.insert(str[i]);
    }
    s.size()%2==0?cout<<"CHAT WITH HER!"<<endl:cout<<"IGNORE HIM!"<<endl;

    
    return 0;
}