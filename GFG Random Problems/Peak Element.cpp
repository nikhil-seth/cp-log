// https://practice.geeksforgeeks.org/problems/peak-element/1
// Peak Element
int peakElement(int arr[], int n){
    int l=0,r=n-1,mid;
    while(l<r){
        int mid=(l+r)/2;
        if(arr[mid]>=arr[mid-1] && arr[mid]>=arr[mid+1])
            return mid;
        else if(arr[mid]>=arr[mid+1])   // means arr[mid]<arr[mid-1], therefore, left pe hoga.
            r=mid-1;
        else
            l=mid+1;
    }
    return l;
}