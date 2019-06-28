// https://practice.geeksforgeeks.org/problems/search-in-a-matrix/0
// Search in a matrix
#include<bits/stdc++.h>
#define pb push_back
#define FORA(x,arr) for(auto &(x):(arr))
using namespace std;
int n,m;
int bsn(int **arr,int row,int k){
    if(arr[row][0]>k || arr[row][m-1]<k)
        return -1;
    int l=0,r=m-1;
    while(l<r){
        int mid=(l+r)/2;
        //cout<<l<<' '<<r<<' '<<mid<<' '<<arr[row][mid]<<endl;
        if(arr[row][mid]==k)
            return mid;
        else if(arr[row][mid]<k)
            l=mid+1;
        else
            r=mid-1;
    }
    if(l==r && arr[row][l]==k)
        return l;
    return -1;
}
int bs(int **arr,int l,int r,int k){    // We'll search in row space.
    while(l<r){
        int mid=(l+r)/2;
        //cout<<l<<' '<<r<<' '<<mid<<' '<<endl;
        if(arr[mid][0]==k)
            return 1;
        else if(arr[mid][m-1]==k)
            return 1;
        else if(arr[mid][0]>k)
            r=mid-1;
        else if(arr[mid][m-1]<k)
            l=mid+1;
        else{
            int temp=bsn(arr,mid,k);
            if(temp!=-1)
                return 1;
            temp=bs(arr,l,mid-1,k);
            if(temp!=0)
                return temp;
            temp=bs(arr,mid+1,r,k);
            return temp;
        }
    }
    if(l==r && bsn(arr,l,k)!=-1)
        return 1;
    return 0;
}       
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int **arr=new int*[n];
        for(int i=0;i<n;i++)
            arr[i]=new int[m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                cin>>arr[i][j];
        }
        int k;
        cin>>k;
        cout<<bs(arr,0,n-1,k)<<endl;
        for(int i=0;i<n;i++)
            delete[] arr[i];
        delete[] arr;
    }
}