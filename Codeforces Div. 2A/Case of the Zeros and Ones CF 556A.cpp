// Link to Problem :https://codeforces.com/problemset/problem/556/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c[2]={};
    cin>>n;
    char s;
    for(int i=0;i<n;i++){
        cin>>s;
        c[int(s-48)]++;
        }
    if(c[0]>c[1])
        cout<<c[0]-c[1];
    else
        cout<<c[1]-c[0];
    
    return 0;
	
}