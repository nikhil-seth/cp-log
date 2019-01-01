#include<bits/stdc++.h>
using namespace std;

struct Heap{
	int *array;
	int count;
	int capacity;
	int heap_type; 		// 0 ->Min , 1-> Max
};
void PercolateDown(Heap *h,int i){
	int l,r,max_val=i;
	l=2*i+1;
	r=2*i+2;
	if(l<h->count && h->array[l]>h->array[max_val])
		max_val=l;
	if(r<h->count && h->array[r]>h->array[max_val])
		max_val=r;
	if(max_val!=i){
		swap(h->array[i],h->array[max_val]);
		PercolateDown(h,max_val);
	}
}
// Deleting an ith index element in heap.
int Deleteith(Heap *h,int i){
	int data;
	if(h->count<=i)
		return INT_MIN;
	data=h->array[i];
	h->array[i]=h->array[h->count-1];
	h->count--;
	PercolateDown(h,i);
	return data;
}
int main(){
	return 0;
}