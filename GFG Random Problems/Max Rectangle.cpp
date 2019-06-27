// https://practice.geeksforgeeks.org/problems/max-rectangle/1
// Max rectangle
int histarea(int arr[],int m){
    stack<int> s;
    int tv;
    int i=0;
    int area=0,ma=0;
    for(i=0;i<m;i++){
        while(!s.empty() && arr[s.top()]>arr[i]){
            tv=s.top();
            s.pop();
            area=arr[tv]*i;
            if(!s.empty())
                area=arr[tv]*(i-1-s.top());
            ma=max(ma,area);
        }
        s.push(i);
    }
    while(!s.empty()){
        tv=s.top();
        s.pop();
        area=arr[tv]*i;
        if(!s.empty())
            area=arr[tv]*(i-s.top()-1);
        ma=max(ma,area);
    }
    return ma;
}
int maxArea(int M[MAX][MAX],int n,int m)
{
    int mv=0,area=0;
    mv=histarea(M[0],m);
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            if(M[i][j])
                M[i][j]+=M[i-1][j];
        }
        mv=max(mv,histarea(M[i],m));
    }
    return mv;
}