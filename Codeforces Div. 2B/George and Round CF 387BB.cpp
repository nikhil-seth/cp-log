#include <bits/stdc++.h>
#define LL unsigned long long
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(auto &x:a)
        cin>>x;
    for(auto &x:b)
        cin>>x;
    int i=0,j=0;
    while(i<n && j<m){
        while(a[i]>b[j] && j<m)
            j++;
        if(a[i]<=b[j] && j!=m){
            j++;
            i++;
        }
    }
    cout<<n-i;
}

    