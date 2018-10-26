#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,ctr=0;
    cin>>k;
    int arr[12];
    for(auto &x:arr)
        cin>>x;
    sort(arr,arr+12);
    int i=11;
    while(k>0 & i>=0){
        ctr++;
        k-=arr[i--];
    }
    if(k>0)
        cout<<-1;
    else
        cout<<ctr;
    return 0;
	
}