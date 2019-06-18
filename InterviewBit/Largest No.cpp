// Largest No
//Link : https://www.interviewbit.com/problems/largest-number/

bool compare(string a,string b){
    string c,d;
    c=a+b;
    d=b+a;
    return c<d;
}
string Solution::largestNumber(const vector<int> &A) {
    string ans,s[A.size()];
    for(auto i=0;i<A.size();i++)
        s[i]=(to_string(A[i]));
    // Converted it to string.
    sort(s,s+A.size(),compare);
    for(int i=A.size()-1;i>=0;i--)
        ans.append(s[i]);
    if(s[A.size()-1]=="0")
        return "0";
    return ans;
}