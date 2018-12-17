#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int s1[100000],s2[100000],ctr1=-1,ctr2=-1;
    int q,val,type;
    cin>>q;
    while(q--){
        cin>>type;
        switch(type){
        case 1:
            cin>>val;
            s1[++ctr1]=val;
            break;
        case 2:
            if(ctr2!=-1)
                ctr2--;
            else if(ctr2==-1){
                while(ctr1!=-1){
                    s2[++ctr2]=s1[ctr1--];
                }
                ctr2--;
            }
            break;
        case 3:
            if(ctr2!=-1)
              cout << s2[ctr2] << endl;
            else if (ctr2 == -1) {
              while (ctr1 != -1) {
                s2[++ctr2] = s1[ctr1--];
              }
              cout << s2[ctr2] << endl;
            }
            break;
        }
    }
    return 0;
}
