#include <bits/stdc++.h>
#define LL unsigned long long
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n+1];
    for(auto &x:arr)
        x=1;
    while(m--){
        int x;
        cin>>x;
        arr[x]=0;
        cin>>x;
        arr[x]=0;   
    }
    int i;
    for(i=1;i<=n;i++){
        if(arr[i]==1)
            break;
    }
    cout<<n-1<<endl;Road Construction
    for(int j=1;j<=n;j++){
        if(j==i)
            continue;
        cout<<i<<' '<<j<<endl;
    }
    return 0;
}