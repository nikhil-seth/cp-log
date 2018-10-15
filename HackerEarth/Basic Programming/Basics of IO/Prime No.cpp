// Link to Problem : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/prime-number-8/
#include<iostream>
#include<string>
using namespace std;
bool isPrime(int n){
    if(n==2 || n==3)
        return 1;
    if(n%2==0 || n%3==0)
        return 0;
    for(int i=4;i*i<=n;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        if(isPrime(i))
            cout<<i<<" ";
    }
    return 0;
}

// Time Complexity : O(n.root(n))