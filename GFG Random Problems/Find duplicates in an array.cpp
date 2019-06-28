// https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array
// Find duplicates in an array
void printDuplicates(int arr[], int n){
    bool flag=1;
    for(int i=0;i<n;i++){
        int t=arr[i]%n;
        // We take number from arr[i].
        arr[t]+=n; // Increments by n.
        if(arr[t]/n==2){
            cout<<t<<' ';
            flag=0;
        }
    }
    if(flag==1)
        cout<<-1;
}
