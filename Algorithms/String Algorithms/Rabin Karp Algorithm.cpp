#define ll long long
class Solution {
public:
    int strStr(string text, string pattern){
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        // Rabin Karp Algorithm
        // Only Lowercase letters,
        int n=text.size(),m=pattern.size();
        if(n<m) return -1;
        const ll p=31,mod=1e9+7;
        ll parr[n+1];
        parr[0]=1;
        for(int i=1;i<=n;i+=1)
            parr[i]=(parr[i-1]*p)%mod;
        ll pattern_hash=0;
        for(int i=0;i<m;i+=1){
            pattern_hash=(pattern_hash + (pattern[i]-'a'+1)*parr[i])%mod;
        }
        vector<ll> text_hash(n+1);
        text_hash[0]=0;
        for(int i=0;i<n;i+=1){
            text_hash[i+1]=(text_hash[i]+(text[i]-'a'+1)*parr[i])%mod;
        }
        for(int i=0;i+m-1<n;i+=1){
            ll cur_h=(text_hash[i+m]+mod-text_hash[i])%mod;
            if(cur_h==pattern_hash*parr[i]%mod)
                return i;
        }
        return -1;
    }
};
