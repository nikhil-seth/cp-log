#include<bits/stdc++.h>
#define ll long long
#define FOR(i,a,b) for(auto i=(a);i<=(b);i++)
#define elif else if
#define FORA(x,arr) for(auto &x:arr)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define fio freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define UL unsigned long
#define mp(a,b) make_pair(a,b)
#define pi pair<int,int>
#define mms(a) memset(a,0,sizeof(a))
using namespace std;
template<typename T>
class Stack{
private:
    int capacity,top;
    T *arr;
public:
    Stack(int n){
        capacity=n;
        top=-1;
        arr=new T[n];
    }
    void push(T data){
        if(top==capacity-1)
            return;
        arr[++top]=data;
    }
    T pop(){
        if(top==-1){
            cout<<"Invalid";
            return 0;
        }
        return arr[top--];
    }
    bool isempty(){
        if(top==-1)
            return 1;
        return 0;
    }
    bool isfull(){
        if(top==capacity-1)
            return 1;
        return 0;
    }
};
int main(){
    fastio
    #ifndef ONLINE_JUDGE
    fio
    #endif
    Stack<int> S(3);
    
    return 0;
}