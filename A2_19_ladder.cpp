#include <bits/stdc++.h>
using namespace std;

int main(){
    char ch[1001];
    int len=strlen(ch);
    char a[1005];
    while(cin>>ch){
        int j=0;
        for(int i=0;i<len;i++){
            if(ch[i]>='0' && ch[i]<='9'){
                a[j++]=ch[i];
            }
        }
        sort(a,a+j);
        for(int i=0;i<j;i++){
            if(i!=j-1){
                cout<<a[i]<<"+";
            }
            else{
                cout<<a[i]<<endl;
            }

        }
    }
    return 0;
}