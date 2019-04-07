#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL merge(long arr[],long l,long m,long r){
	long n1=m-l+1;
	long n2=r-m;
	long i,j,k;
	long L[n1],R[n2];
	for(int i=0;i<n1;i++)
		L[i]=arr[l+i];
	for(int i=0;i<n2;i++)
		R[i]=arr[m+i+1];
	i=0;
	j=0;
	k=l;
    LL count=0;
    while(i<n1 && j<n2){
        if(L[i]<=R[j])
            arr[k++]=L[i++];
        else{
            count+=n1-i;
            arr[k++]=R[j++];
        }
    }
    while(i<n1)
        arr[k++]=L[i++];
    while(j<n2)
        arr[k++]=R[j++];
    return count;
}
LL mergesort(long arr[],long l,long r){
    if(l<r){
	    LL ls,rs,ms;
    	long mid=l+(r-l)/2;
    	ls=mergesort(arr,l,mid);
    	rs=mergesort(arr,mid+1,r);
    	ms=merge(arr,l,mid,r);
    	return ls+rs+ms;
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
        long *arr=new long[n];
        for(long i=0;i<n;i++)
            cin>>arr[i];
        cout<<mergesort(arr,0,n-1)<<endl;
        
    }
    
}