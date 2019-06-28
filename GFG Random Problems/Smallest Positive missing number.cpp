//Smallest Positive missing number
// https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number/1
void swap(int &a,int &b){
    int t=a;
    a=b;
    b=a;
}
int segregate(int arr[],int n){
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]<=0){
            j++;
            swap(arr[i],arr[j]);
        }
    }
    return j+1;
}
int fn(int arr[],int n){
    int i;
    for(int i=0;i<n;i++){
        int t=abs(arr[i]);
        if(t-1<n  && arr[t-1]>0)
            arr[t-1]*=-1;
    }
    for(i=0;i<n;i++){
        if(arr[i]>0)
            return i+1;
    }
    return n+1;
}
int missingNumber(int arr[], int n){
    int index=segregate(arr,n);
    return fn(arr+index,n-index);
}