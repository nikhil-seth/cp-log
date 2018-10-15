// Link to Problem : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/count-divisors/
#include<iostream>
using namespace std;

int main(){
    int l,r,k,ctr=0;
    cin>>l>>r>>k;
    while(l<=r){
        if(l%k!=0){
            l=(l/k)*k+k;
            if(l>r)
                break;
        }
        ++ctr;
        l+=k;
    }
    cout<<ctr;
    return 0;
}

// Time Complexity : O((r-l)/k)