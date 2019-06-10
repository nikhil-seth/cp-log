// Binet's Formula
// Used to find if a no is a fibbonaci no or not.
// if 5*n^2-4 or 5*n^2+4 is a perfect square then n is a fibbonaci no.
#include<bits/stdc++.h>
#define LL long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
using namespace std;
bool binet(int n){
    if(floor(sqrt(5*pow(n,2)-4))==sqrt(5*pow(n,2)-4))
        return 1;
    if(floor(sqrt(5*pow(n,2)+4))==sqrt(5*pow(n,2)+4))
        return 1;
    return 0; 
}
int main(){
    fastio
    fio
    int t,n,x;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v;
        FOR(i,0,n-1){
            cin>>x;
            if(binet(x))
                v.pb(x);
        }
        FORA(x,v)
            cout<<x<<' ';
        cout<<endl;
    }
}