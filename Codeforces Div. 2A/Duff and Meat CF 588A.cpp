#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,pr=1000,a,b,tot=0;
    cin>>n;
    while(n--){
        cin>>a>>b;
        tot+=a*min(pr,b);
        pr=min(pr,b);
    }
    cout<<tot;
        return 0;
}