#include <bits/stdc++.h>
#define LL unsigned long long
using namespace std;
int main(){
    int m,s;
    cin>>m>>s;
    char k[m];
    if((s==0 && m!=1) || m*9<s){
        cout<<"-1 -1";
        return 0;
    }
    int t=s;
    s-=1;
    for(int i=m-1;i>0;i--){
        if(s>=9){
          k[i]='9';
          s-=9;
        }
        else if(s<9){
          k[i]=48+s;
          s=0;
        }
    }
    k[0]=(49+s);
    char k2[m];
    for(int i=0;i<m;i++){
        if(t>=9){
          k2[i]='9';
          t-=9;
        }
        else if(t<9){
          k2[i]=48+t;
          t=0;
        }
    }
    for(int i=0;i<m;i++)
      cout<<k[i];
    cout<<' ';
    for(int i=0;i<m;i++)
      cout<<k2[i];
  }
    
    

