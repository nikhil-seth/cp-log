#include<bits/stdc++.h>
using namespace std;

struct Heap{
	int *array;
	int count;
	int capacity;
	int heap_type; 		// 0 ->Min , 1-> Max
};
// Given a min-heap,give an algo for finding the max element.
int MaxElemMinHeap(Heap *h){
	int max_val=INT_MIN;
	for(int i=(h->count+1)/2;i<h->count;i++)
		max_val=max(max_val,h->array[i]);
	return max_val;
}
int main(){
	return 0;
}