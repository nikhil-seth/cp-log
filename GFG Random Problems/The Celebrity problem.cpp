// Link: https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1
int getId(int M[MAX][MAX], int n)
{
    stack<int> s;
    for(int i=0;i<n;i++)
        s.push(i);
    int a,b,c;
    while(s.size()>=2){
        c=s.size();
        a=s.top();
        s.pop();
        b=s.top();
        s.pop();
        if(M[a][b]==1 && M[b][a]==1);
        else if(M[b][a]==1)  // b->a
            s.push(a);
        else if(M[a][b]==1) // a->b
            s.push(b);
    }
    if(s.empty())
        return -1;
    for(int i=0;i<n;i++){
        if(s.top()==i)
            continue;
        if(M[i][s.top()]==0 || M[s.top()][i]==1)
            return -1;
    }
    return s.top();
}