// Link to Problem : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-factorial/
#include<iostream>
using namespace std;
int fact(int n){
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
int main(){
    int ctr;
    cin>>ctr;
    ctr=fact(ctr);
    cout<<ctr;
    return 0;
}

// Time Complexity : O(n)