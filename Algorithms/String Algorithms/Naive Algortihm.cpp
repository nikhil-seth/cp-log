#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
#define mp(a,b) make_pair(a,b)
#define vi vector<int>
#define vpii vector<pair<int,int>>
#define mii map<int,int>
#define mpii map<pair<int,int>>
#define pii pair<int,int>
#define mms(a) memset(a,0,sizeof(a))
using namespace std;
// NAIVE ALGORITHM FOR PATTERN SEARCHING
// TC: O(N*M)
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
    string text,pat;
    cin>>pat>>text;
    int ctr=0;
    for(int i=0,j;i<text.length()-pat.length()+1;i++){
        for(j=0;j<pat.length();j++){
            if(pat[j]!=text[i+j])
                break;
        }
        if(j==pat.length())
            ctr+=1;
    }
    cout<<ctr;
}
