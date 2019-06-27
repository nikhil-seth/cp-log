//https://practice.geeksforgeeks.org/problems/magnet-array-problem/0
//Magnet Array Problem
#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
#define M 100
using namespace std;
float val(double arr[],double i,int n){
    double x=0;
    for(int j=0;j<n;j++)
            x=x+(1/double(i-arr[j]));
    return x;
}
double bs(double arr[],int n,double l,double r){
    double mid;
    while(r>l){
        mid=(r+l)/2;
        double x=val(arr,mid,n);
        if(abs(x)<1e-9)
            return mid;
        else if(x>0)
            l=mid;
        else
            r=mid;
    }
    return l;
}
int main(){
    //fio
    fastio
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        double arr[n];
        FORA(x,arr)
            cin>>x;
        cout<<fixed<<setprecision(2);
        for(int i=1;i<n;i++)
            cout<<bs(arr,n,arr[i-1],arr[i])<<' ';
        cout<<endl;
    }
}