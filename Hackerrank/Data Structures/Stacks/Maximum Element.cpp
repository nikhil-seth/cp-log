#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    long stack[n],mstack[n],x;
    int top=-1,mtop=-1;
    int type;
    for(int i=0;i<n;i++){
        cin>>type;
        switch(type){
            case 1:
                cin>>x;
                stack[++top]=x;
                if(mtop==-1 || mstack[mtop]<=x)
                    mstack[++mtop]=x;
                break;
            case 2:
                top--;
                if(stack[top+1]==mstack[mtop])
                    mtop--;
                break;
            case 3:
                cout<<mstack[mtop]<<endl;
                break;
        }
    }
        return 0;
}
