#include<bits/stdc++.h>
#include<cmath>
#define LL long long
using namespace std;

int check(LL n)
{
    int count = 0;
    if(n<0)
    {
          n=-n;
    }
    while(n)
    {
        if(n%10==8)
        {
            count++;
        }
        n=n/10;
    }
    return count;
}

int main()
{
    LL a;
    int count, f;
    cin >> a;
    f=0;
    while(1)
    {
        a++;
        f++;
        count = check(a);
        if(count>=1)
        {
           break;
        }
    }
    cout<< f << endl;
}