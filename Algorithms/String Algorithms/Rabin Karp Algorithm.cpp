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
// Rabin Karp FOR PATTERN SEARCHING
// TC: O(n+m)
vector<int> rabin_karp(string &s,string &t){
    ll p=31,m=1e9+7;
    int S=s.length(),T=t.length();
    vector<ll> p_pow(max(S,T));
    p_pow[0]=1;
    FOR(i,1,max(S,T)-1)
        p_pow[i]=(p_pow[i-1]*p)%m;
    vector<ll> h(T+1,0);
    // We Computed Hash for every prefix in Text.
    FOR(i,0,T-1)
        h[i+1]=(h[i]+(t[i]-'a'+1)*p_pow[i])%m;
    ll h_s=0;
    // Then We calculated hash for pattern
    FOR(i,0,S-1)
        h_s=(h_s+(s[i]-'a'+1)*p_pow[i])%m;
    vector<int> occurences;
    for (int i = 0; i + S - 1 < T; i++){
        // For every pattern, we calc. hash & tried it. 
        long long cur_h = (h[i+S] + m - h[i]) % m; 
        if (cur_h == h_s * p_pow[i] % m)
            occurences.push_back(i);
    }
    return occurences;
}
int main(){
	fastio
	#ifndef ONLINE_JUDGE
	fio
	#endif
    string text,pat;
    cin>>pat>>text;
    int ctr=0;
    vector<int> x=rabin_karp(pat,text);
    for(auto c:x)
        cout<<c<<' ';
}
