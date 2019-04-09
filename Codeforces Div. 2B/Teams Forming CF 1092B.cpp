#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(auto &x:arr)
        cin>>x;
    sort(arr,arr+n);
    long ctr=0;
    for(int i=0;i<n;i+=2){
        if(arr[i]==arr[i+1])
            continue;
        ctr+=arr[i+1]-arr[i];
    }
    cout<<ctr;
}