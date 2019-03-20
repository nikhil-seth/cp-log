#include <stdio.h>
#define Change cost[0] = cote[0]; cost[1] = cote[1]; turn++
#define X cost[0] == coen[0]
#define Y cost[1] == coen[1]
int main(){
    int turn = -1, add = 1;
    int coen[2], cost[2], cote[2] = {0, 0};
    scanf("%d%d", coen+0, coen+1);
    for(;;){
        Change; cote[0] += add;
        if(coen[0] <= cote[0] && cost[0] <= coen[0] && Y)
            break;
        Change; cote[1] += add++;
        if(coen[1] <= cote[1] && cost[1] <= coen[1] && X)
            break;
        Change; cote[0] -= add;
        if(coen[0] >= cote[0] && cost[0] >= coen[0] && Y)
            break;
        Change; cote[1] -= add++;
        if(coen[1] >= cote[1] && cost[1] >= coen[1] && X)
            break;
    }
    printf("%d\n", turn);
	return 0;
}