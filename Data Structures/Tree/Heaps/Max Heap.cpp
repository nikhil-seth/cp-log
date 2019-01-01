#include<bits/stdc++.h>
using namespace std;

struct Heap{
	int *array;
	int count;
	int capacity;
	int heap_type; 		// 0 ->Min , 1-> Max
};
Heap *CreateHeap(int capacity,int heap_type){
	Heap *H;
	H=(Heap*)malloc(sizeof(Heap));
	if(!H){
		cout<<"Memory Error";
		return nullptr;
	}
	H->capacity=capacity;
	H->heap_type=heap_type;
	H->count=0;
	H->array=(int*)malloc(sizeof(int)*H->capacity);
	if(!(H->array)){
		cout<<"Memory Error";
		free(H);
		return nullptr;
	}
	return H;
}
// Time Complexity : O(1)
// For parent of ith node, parent is at (i-1)/2
 int parent(Heap *H,int i){
 	if(i<=0 || i>=H->count) // If asking for root's parent or i is invalid.
 		return -1;
 	return (i-1)/2;
 }
 // Childrent are at 2i+1,2i+2

 int leftchild(Heap *H,int i){
 	int l=2*i+1;
 	if(l>=H->count)
 		return -1;
 	return l;
 }
int rightChild(Heap *H,int i){
	int r=2*i+2;
	if(r>=H->count)
		return -1;
	return r;
}
// Both Children Functions have time complexity O(1).
int GetMaximum(Heap *H){ // for Max Heap
	if(H->count==0)
		return -1;
	return H->array[0];
}
// TC - O(1)
int GetMinimum (Heap *H){ // For Min Heap
	if(H->count==0)
		return -1;
	return H->array[0];
}
void PercolateDown(Heap *h,int i){ // Or Called Percolate Down.
	int l,r,max_ind,temp;
	max_ind=i;
	l=leftchild(h,i);
	r=leftchild(h,i);
	if(l!=-1 && h->array[l]>h->array[max_ind])
		max_ind=l;
	if(r!=-1 && h->array[r]>h->array[max_ind])
		max_ind=r;
	if(max_ind!=i){
		// Swapping with i & calling for percolating down.
		temp=h->array[i];
		h->array[i]=h->array[max_ind];
		h->array[max_ind]=temp;
		PercolateDown(h,max_ind);
	}
}
// Deleting an element from maxheap.
// For deleting , remove elem at root, copy last elem at list & call percolte down.
int DeleteMax(Heap *h){
	if(h->count==0)
		return INT_MAX;
	if(h->count==1){
		h->count--;
		return h->array[0];
	}
	int data=h->array[0];
	h->array[0]=h->array[h->count-1];
	h->count--;
	PercolateDown(h,0);
	return data;
}
// For Making heap dynamic
void ResizeHeap(Heap *h){
	h->capacity=h->capacity*2;
	realloc(h->array,h->capacity*sizeof(int));
}
// Insert ( Uses Percolate Up).
void Insert(Heap *h,int data){
	if(h->count==h->capacity)
		ResizeHeap(h);
	h->count++;
	int i=h->count-1,t;
	while(i>=0){
		t=(i-1)/2;
		if(data>h->array[t]){
			h->array[i]=h->array[t];
			i=t;
		}
		else
			break;
	}
	h->array[i]=data;
}
// Time Complexity : O(n)
void DestroyHeap(Heap *h){
	if(h){
		if(h->array)
			free(h->array);
		free(h);
	}
	h=nullptr;
}

void BuildHeap(Heap *h,int A[],int n){
	// Need to make a heap of array A.
	if(h==nullptr)
		return;
	while(n>h->capacity)
		ResizeHeap(h);
	for(int i=0;i<n;i++)
		h->array[i]=A[i];
	h->count=n;
	for(int i=(n-1)/2;i>=0;i--)
		PercolateDown(h,i);
}
// Time Complexity : O(n).
int main(){
	return 0;
}