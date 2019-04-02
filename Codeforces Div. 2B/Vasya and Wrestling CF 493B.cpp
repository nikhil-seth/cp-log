#include <bits/stdc++.h>
#define LL unsigned long long
using namespace std;
int main(){
    int n,fi=0,si=0;
    cin>>n;
    long f[200000],s[200000];
    long x;
    LL sf=0,ss=0;
    while(n--){
        cin>>x;
        if(x>0){
            f[fi++]=x;
            sf+=x;
        }
        else{
            s[si++]=abs(x);
            ss+=abs(x);
        }
    }
    if(sf>ss)
        cout<<"first";
    else if(sf<ss)
        cout<<"second";
    else{
        for(int i=0;i<min(fi,si);i++){
            if(f[i]>s[i]){
                cout<<"first";
                return 0;
            }
            else if(f[i]<s[i]){
                cout<<"second";
                return 0;
            }
        }
        if(fi>si)
            cout<<"first";
        else if(fi<si)
            cout<<"second";
        else{
            if(x>0)
                cout<<"first";
            else
                cout<<"second";
        }

        }
    }