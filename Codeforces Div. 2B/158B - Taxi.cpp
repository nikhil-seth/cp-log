#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    long ctr=0;
    cin>>n;
    int arr[5]={0,0,0,0,0};
    for(int i=0;i<n;i++){
        cin>>t;
        ++arr[t];
    }
    ctr+=arr[4];
    ctr+=arr[3];
    arr[1]-=arr[3];
    ctr+=(arr[2]/2);

    arr[2]%=2;
    if(arr[2]==1){
        ctr+=1;
        arr[1]-=2;
    }
    if(arr[1]>0){
    ctr+=(arr[1]/4);
    arr[1]%=4;
}
    if(arr[1]>0)
        ctr+=1;
    cout<<ctr;

    return 0;
    
}