// Link to Problem : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/seating-arrangement-1/
#include<iostream>
#include<string>
using namespace std;
string seattype(int n){
    if(n==1 || n%6==0 || n==7|| n==0)
        return "WS";
    else if(n==3 || n==4 || n==9 || n==10)
        return "AS";
    else
        return "MS";
}
int main(){
    int t,n,q;
    cin>>t;
    while(t--){
        cin>>n;
        int k;
        k=n/12;
        q=n%12;
        if(q==0)
            n=(12*k)-11;
        else
            n=(13-q)+ (12*k);
        cout<<n<<' '<<seattype(q)<<endl;
    }
    return 0;
}

// Time Complexity : O(t)