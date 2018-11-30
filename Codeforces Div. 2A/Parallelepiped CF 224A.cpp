#include<bits/stdc++.h>
#include<cmath>
#define LL long long
using namespace std;
int main(){
    int a,b,c,v1,v2,v3;
    cin>>a>>b>>c;
    v1=floor(sqrt(a*b/c));
    v2=floor(sqrt(a*c/b));
    v3=floor(sqrt(b*c/a));
    cout<<(v1+v2+v3)*4; 
}
