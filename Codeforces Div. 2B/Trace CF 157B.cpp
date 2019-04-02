#include <bits/stdc++.h>
#define LL unsigned long long
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(auto &x:arr)
        cin>>x;
    sort(arr,arr+n);
    long s[2]={0,0};
    int q=0;
    for(int i=0;i<n;i++){
        if(i==0){
            s[q]+=arr[i]*arr[i];
            q=1-q;
            continue;
        }
        s[q]+=arr[i]*arr[i]-arr[i-1]*arr[i-1];
        q=1-q;
    }
    double d=atan(1)*4;
    //cout<<s[0]<<' '<<s[1]<<endl;
    if(n%2==0)
        cout<<d*s[1];
    else
        cout<<d*s[0];

    return 0;
}