// Search in Sorted Rotated Array
// https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array/0
#include<bits/stdc++.h>
#define pb push_back
#define FORA(x,arr) for(auto &(x):(arr))
using namespace std;
long bs(long arr[],long n,long k){
    long l=0,r=n-1,res;
    bool flag=1;
    while(l<r){
        long mid=(l+r)/2;
        if(mid>l && arr[mid]<arr[mid-1]){
            res=mid;
            flag=0;
            break;
        }
        if(mid<r && arr[mid]>arr[mid+1]){
            res=mid+1;
            flag=0;
            break;
        }
        if(arr[mid]>arr[n-1])
            l=mid+1;
        else
            r=mid-1;
    }
    if(flag)
        res=l;
    if(arr[n-1]==k)
        return n-1;
    else if(arr[n-1]>k){
        l=res;
        r=n-1;
    }
    else{
        l=0;
        r=res-1;
    }
    //cout<<l<<' '<<r<<endl;
    //cout<<arr[l]<<' '<<arr[r]<<endl;
    if(k<arr[l] || k>arr[r])
        return -1;
    while(l<r){
        long mid=(l+r)/2;
        if(arr[mid]==k)
            return mid;
        else if(arr[mid]<k)
            l=mid+1;
        else
            r=mid-1;
    }
    if(l==r && arr[l]==k)
        return l;
    return -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long n,x;
        cin>>n;
        long arr[n];
        FORA(y,arr)
            cin>>y;
        cin>>x;
        x=bs(arr,n,x);
        cout<<x<<endl;
    }
}