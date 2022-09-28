// #include <bits/stdc++.h>
// using namespace std;

// void printS(int i,vector <int> &ds, int s,int sum,int a[],int n){
//     if(i==n)   {
//         if(s = sum){
//             for(auto it:ds) cout<<it<<" ";
//             cout<<endl;
//         }
//         return;
//     }

//     //take condition
//     ds.push_back(a[i]);
//     s+=a[i];
//     printS(i+1,ds,s, sum, a, n);
//     ds.pop_back(); 
//     s-=a[i];

//     //not pick wala writen downside
//     printS(i+1,ds,s,sum,a,n);



// }

// int main(){
//     int a[]={1,2,1};
//     int n=3;
//     int sum=2;
//     vector <int> ds;
//     printS(0,ds,0,sum,a,n);

//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

int printS(int i, int s,int sum,int a[],int n){
    if(i==n)   {
        if(s == sum){
            return 1;
        }
        else return 0;
    }

    //take condition
    s+=a[i];

    int l=printS(i+1,s, sum, a, n);

    s-=a[i];

    //not pick wala writen downside
    int r=printS(i+1,s,sum,a,n);
    
    return l+r;

}

int main(){
    int a[]={1,2,1,3,4,2};
    int n=6;
    int sum=4;
    // vector <int> ds;
    cout<<printS(0,0,sum,a,n)<<endl;

    return 0;
}