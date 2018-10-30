#include<bits/stdc++.h>
#include<iomanip>
#include<cmath>
#define FOR(a,b,c) for(int i=(a);i<(b);i+=(c))
using namespace std;
#define LL long long    
int main(){
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0,j=(s2.length()-1);i<s1.length()&& j>=0;i++,j--){
        if(s1[i]!=s2[j]){
            cout<<"NO";
            return 0;
        }
    }   cout<<"YES";
    return 0;
}