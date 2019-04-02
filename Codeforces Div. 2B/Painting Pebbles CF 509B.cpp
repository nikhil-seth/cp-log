#include <bits/stdc++.h>
#define LL unsigned long long
using namespace std;
LL f[100][100];
int main()
{
    //freopen("in.txt","r",stdin);
    LL i,j,k;
    LL n,m,x,w;

    cin>>n>>k;
    LL a[n];

    m=200;
    for(i=0; i<n; i++)
        cin>>a[i],m=min(m,a[i]);

    x=1;
    if(x>k)
    {
        cout<<"NO";
        return 0;
    }

    memset(f,0,sizeof(f));
    for(i=0; i<n; i++)
    {
        for(j=0; j<=m; j++)
            f[i][j]=x;
    }

    m++;x++;
    for(i=0;i<n;i++)
    {
        w=x;
        for(j=m;j<a[i];j++)
        {
            if(w>k)
            {
                cout<<"NO";
                return 0;
            }

            f[i][j]=w;w++;
        }
    }

    cout<<"YES"<<endl;
    for(i=0; i<n; i++)
    {
        for(j=0; j<a[i]; j++)
            cout<<f[i][j]<<" ";

        cout<<endl;
    }

    return 0;
}