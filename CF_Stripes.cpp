// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// void solve(){
//     char a[8][8];
//     int n=8;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>a[i][j];
//         }
//     }
//     int r=0;
//     int b=0;
//     for(int i=0;i<n;i++){
//         // if()
//         for(int j=0;j<n;j++){
//             if(a[i][j]=='r'){
//                 r++;
//                 if(r==8){
//                     cout<<"R"<<endl;
//                     // break;
//                     return;
//                 }
//             }
//             else if(a[i][j]=='b'){
//                 b++;
//                 if(b==8){
//                     cout<<"B"<<endl;
//                     // break;
//                     return;
//                 }
//             }
//             else{
//                 continue;
//             }
//         }
//     }
//     r=b=0;
//     for(int j=0;j<n;j++){
//         for(int i=0;i<n;i++){
//             if(a[j][i]=='r'){
//                 r++;
//                 if(r==8){
//                     cout<<"R"<<endl;
//                     // break;
//                     return;
//                 }
//             }
//             else if(a[j][i]=='b'){
//                 b++;
//                 if(b==8){
//                     cout<<"B"<<endl;
//                     // break;
//                     return;
//                 }
//             }
//             else{
//                 continue;
//             }
//         }
//     }
// }

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         solve();
//     }

//     return 0;
// }






#include <bits/stdc++.h>
// #include <vector>
using namespace std;
#define ll long long

void solve(){
    string a[8];
        char ans;
        
        for(int i = 0; i < 8; ++i)
        {
            cin>>a[i];
        }
        int r = 0, c = 0, flag = 0;
        for(int i = 0; i < 8; i++)
        {
            r = 0;
            for(int j = 0; j < 8; ++j)
            {
                if(a[i][j] == 'R')
                {
                    r++;
                }
            }
            if(r==8)
            {
                cout<<"R\n";
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            for(int i = 0; i < 8; i++)
            {
                c = 0;
                for(int j = 0; j < 8; ++j)
                {
                    if(a[j][i] == 'B')
                    {
                        c++;
                    }
                }
                if(c==8)
                {
                    cout<<"B\n";
                    break;
                }
            }
        }
    }


int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }

    return 0;
}