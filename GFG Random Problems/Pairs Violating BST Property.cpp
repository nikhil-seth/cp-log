// https://practice.geeksforgeeks.org/problems/pairs-violating-bst-property/1
//Pairs violating BST property
long merge(int arr[],int l,int mid,int r){
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++)
        a[i]=arr[l+i];
    for(int i=0;i<n2;i++)
        b[i]=arr[mid+i+1];
    int i=0,j=0,k=l;
    long c=0;
    while(i<n1 && j<n2){
        if(a[i]<b[j])
            arr[k++]=a[i++];
        else{
            c=(c+(n1-i)%1000000007)%1000000007; // ith elem aur usse aage wale sab bade h.
            arr[k++]=b[j++];
        }
    }
    while(i<n1)
        arr[k++]=a[i++];
    while(j<n2)
        arr[k++]=b[j++];
    return c%1000000007;
}
long mergesort(int arr[],int l,int r){
    //cout<<l<<' '<<r<<' ';
    if(l<r){
        long ls,rs,ms;
        int mid=l+(r-l)/2;
        ls=mergesort(arr,l,mid);
        rs=mergesort(arr,mid+1,r);
        ms=merge(arr,l,mid,r);
        //cout<<ms<<endl;
        return ((ls+rs)%1000000007+ms)%1000000007;
    }
    return 0;
}
void io(Node *root,int arr[],int &i){
    if(!root)
        return;
    io(root->left,arr,i);
    arr[i++]=root->data;
    io(root->right,arr,i);
}
int pairsViolatingBST(Node *root,int n){
    int arr[n];
    int i=0;
    io(root,arr,i);
    return mergesort(arr,0,n)%1000000007;
}

