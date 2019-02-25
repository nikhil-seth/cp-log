#include<bits/stdc++.h>
using namespace std;

int main() {
    long n,k;
    int t,ct;
    cin>>n;
    if(n==0)
        cout<<"O-|-OOOO";
    while(n){
        t=n%10;
        if(t<5)
            cout<<"O-|";
        else{
            cout<<"-O|";
            t-=5;
        }
        ct=4-t;
        while(t--)
            cout<<"O";
        cout<<"-";
        while(ct--)
            cout<<"O";
        n/=10;
        cout<<endl;
    }
    return 0;
}
