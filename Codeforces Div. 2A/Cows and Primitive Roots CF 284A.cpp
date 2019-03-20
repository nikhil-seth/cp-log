#include <bits/stdc++.h>
using namespace std;

int countPrimitiveRoots(int p) 
{ 
    int result = 1; 
    for (int i = 2; i < p; i++) 
        if (__gcd(i, p) == 1) 
            result++; 
  
    return result; 
} 
int main() 
{ 
    int p;
    cin>>p; 
  
    cout << countPrimitiveRoots(p - 1); 
  
    return 0; 
} 