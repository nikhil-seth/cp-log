#include<bits/stdc++.h>
using namespace std;
#define dt long long
bool hav8(dt x,int k){
    k=pow(10,k);
    if(x%k==8)
            return 1;
    else
        return 0;
}
int main(){
    dt x;
    cin>>x;
    for(int i=1;i<=16;i++){
        if(hav8(x+i)){
            cout<<i;
            return 0;
        }
    }
    cout<<-1;
    return 0;
	
}