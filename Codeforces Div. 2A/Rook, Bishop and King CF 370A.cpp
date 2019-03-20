#include <bits/stdc++.h>
using namespace std;
int main(){
    int r1,r2,c1,c2;
    cin>>r1>>c1>>r2>>c2;
    if(r1==r2 || c1==c2)
        cout<<1<<' ';
    else
        cout<<2<<' ';
    if(((r1+c1)%2!=0 && (r2+c2)%2==0) || ((r1+c1)%2==0 && (r2+c2)%2!=0))
        cout<<0;
    else if(abs(r2-r1)==abs(c2-c1))
        cout<<1;
    else
        cout<<2;
    cout<<' ';
    int t=min(abs(r1-r2),abs(c1-c2));
    t=abs(r1-r2)+abs(c1-c2) -t;
    cout<<t;
    return 0;
}
