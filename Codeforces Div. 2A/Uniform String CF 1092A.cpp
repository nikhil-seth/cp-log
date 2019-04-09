#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        char s[n];

        for(int i=0,j=0;i<n;i++){
            s[i]=97+j;
            j++;
            if(j==k)
                j=0;
            cout<<s[i];
        }  
        cout<<endl;
    }
}