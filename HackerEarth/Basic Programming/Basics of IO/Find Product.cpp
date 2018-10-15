// Link to Problem : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-product/
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    long n,a[1000],i,answer=1;
    cin>>n;
    long p=pow(10,9); 
    for(i=0;i<n;i++) 
    {   cin>>a[i];
        answer=(answer*a[i])%(p+7);
    }
cout<<answer;
    return 0;
}

// Time Complexity : O(n)