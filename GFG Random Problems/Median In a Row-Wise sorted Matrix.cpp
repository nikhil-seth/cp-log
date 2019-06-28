// Median In a Row-Wise sorted Matrix
// https://practice.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix/0
#include<bits/stdc++.h>
#define pb push_back
#define FORA(x,arr) for(auto &(x):(arr))
using namespace std;
int bs(int **arr,int row,int n,int val){
    int l=0,r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[row][mid]<=val)
            l=mid+1;
        else
            r=mid-1;
    }
    return l;
}       
int chk(int **arr,int r,int c,int val){
    int count=0;
    for(int i=0;i<r;i++)
        count+=bs(arr,i,c,val);
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int r,c;
        cin>>r>>c;
        int **arr=new int*[r];
        for(int i=0;i<r;i++)
            arr[i]=new int[c];
        int min_val=INT_MAX,max_val=INT_MIN;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>arr[i][j];
                min_val=min(min_val,arr[i][j]);
                max_val=max(max_val,arr[i][j]);
            }
        }
        int count=0,mid=0;
        int n=(r*c)/2+1;
        int res=-1;
        while(min_val<max_val){
            mid=(min_val+max_val)/2;
            count=chk(arr,r,c,mid);
            //cout<<min_val<<' '<<max_val<<' '<<mid<<' '<<count<<endl;
            if(count<n)
                min_val=mid+1;
            else
                max_val=mid;
        }
        cout<<min_val<<endl;
    }
}
