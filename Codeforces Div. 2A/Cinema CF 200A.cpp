#include <bits/stdc++.h>
using namespace std ;
#define LL long long int
#define ft first
#define sd second
#define PII pair<int,int>
#define MAXN 1000001
#define MAXM 111
#define mp make_pair
#define f_in(st) freopen(st,"r",stdin)
#define f_out(st) freopen(st,"w",stdout)
#define sc(x) scanf("%d",&x)
#define scll(x) scanf("%lld",&x)
#define pr(x) printf("%lld\n",x)
#define pb push_back
#define MOD 1000000007
#define L 0
#define R 1
bool V[2222][2222] ;
int n,m,k,DP[2222][2222][2];

void update(int x,int y){
    DP[x][y][L] = DP[x][y-1][L] ;
    DP[x][y][R] = DP[x][y+1][R] ;
    int v = DP[x][y][L] ;
    for(int j=y;j<=m;j++){
        if(V[x][j]){
            v = j ;
        }
        DP[x][j][L] = v ;
    }
    v = DP[x][y][R] ;
    for(int j=y;j>0;j--){
        if(V[x][j]){
            v = j ;
        }
        DP[x][j][R] = v ;
    }
}
int main(){
    sc(n) ; sc(m) ; sc(k) ;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++){
            V[i][j] = 1 ;
            DP[i][j][L] = DP[i][j][R] = j ;
        }

    while(k --){
        int x ,y , nx , ny , d ;
        sc(x) ;
        sc(y) ;
        if(V[x][y]){
            printf("%d %d\n",x,y) ;
            V[x][y] = 0 ;
            update(x,y) ;
        }else{
            d = 50000 ;
            nx = -1 ;
            ny = -1 ;
            int idx = x ;
            while(idx){
                if(DP[idx][y][R]){
                    if(d >= (x - idx + DP[idx][y][R] - y)){
                        d = (x - idx + DP[idx][y][R] - y) ;
                        nx = idx ;
                        ny = DP[idx][y][R] ;
                    }
                }
                if(DP[idx][y][L]){
                    if(d >= (x - idx - DP[idx][y][L] + y)){
                        d = (x - idx - DP[idx][y][L] + y) ;
                        nx = idx ;
                        ny = DP[idx][y][L] ;
                    }
                }
                if(d < (x - idx))
                    break ;
                idx -- ;
            }
            idx = x ;
            while(idx <= n){
                if(DP[idx][y][L]){
                    if(d > (idx - x - DP[idx][y][L] + y)){
                        d = (idx - x - DP[idx][y][L] + y) ;
                        nx = idx ;
                        ny = DP[idx][y][L] ;
                    }
                }
                if(DP[idx][y][R]){
                    if(d > (idx - x + DP[idx][y][R] - y)){
                        d = (idx - x + DP[idx][y][R] - y) ;
                        nx = idx ;
                        ny = DP[idx][y][R] ;
                    }
                }
                if(d < (idx-x))
                    break ;
                idx ++ ;
            }
            if(nx != -1){
                printf("%d %d\n",nx,ny) ;
                V[nx][ny] = 0 ;
                update(nx,ny) ;
            }
        }
    }
    return 0 ;
}