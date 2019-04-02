#include <bits/stdc++.h>
#define LL unsigned long long
using namespace std;
int main(){
    int n;
    cin>>n;
    long arr[n];
    for(auto &x:arr)
        cin>>x;
    if(n<=2){
        cout<<n;
        return 0;
    }
    int max_val=0;
    for(int i=n-1;i>1;i--)
        arr[i]-=(arr[i-1]+arr[i-2]);
    for(int i=0;i<n-2 && (n-i)>max_val;i++){
        int val=2;
        for(int j=i+2;j<n;j++){
            //cout<<arr[i]<<' '<<val<<' '<<max_val<<endl;
            if(arr[j]==0)
                val++;
            else
                break;
        }
        max_val=max(val,max_val);
    }
    cout<<max_val;
    return 0;
}