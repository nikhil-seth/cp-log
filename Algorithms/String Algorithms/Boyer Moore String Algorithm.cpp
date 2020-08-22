#define ll long long
class Solution {
public:
    int strStr(string text, string pattern){
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        // Boyer Moore's Algorithm.
        // Lowercase letters only.
        // Bad Match Table.
        int m=pattern.size(),n=text.size();
        vector<int> bmt(26,m);
        for(int i=0;i<m-1;i+=1){
            bmt[pattern[i]-'a']=m-i-1;
        }
        for(int i=m-1;i<n;){
            //cout<<i<<endl;
            int j=m-1,k=i;
            while(j>=0 && text[k]==pattern[j])
                j-=1,k-=1;
            if(j<0)
                return k+1;
            else{
                if(k+bmt[text[k]-'a']<=i)
                    i+=1;
                else
                    i=k+bmt[text[k]-'a'];
            }
        }
        return -1;
    }
};
