#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
// Binary Heap Class
// Max Heap Implemented
// For Min Heap, convert all > to < only
template<class T>
class Heap{
	vector<T> arr;
	T capacity;
	T heap_size;
	T parent(T x){
		x=(x-1)/2;
		return x<0?-1:x;
	}
	T left(T x){
		x=2*x+1;
		return x>=heap_size?-1:x;
	}
	T right(T x){
		x=2*x+2;
		return x>=heap_size?-1:x;
	}
	void PercolateDown(T i){
		T l,r,largest=i;
		l=left(i);
		r=right(i);
		if(l!=-1 && arr[l]>arr[largest])
			largest=l;
		if(r!=-1 && arr[r]>arr[largest])
			largest=r;
		if(largest!=i){
			swap(arr[largest],arr[i]);
			PercolateDown(largest);
		}
	}
	void PercolateUp(T i){
		while(i>0 && arr[parent(i)]<arr[i])
			swap(arr[parent(i)],arr[i]),i=parent(i);
	}
public:
	Heap(T c){
		capacity=c;
		heap_size=0;
	}
	Heap(const vector<T> &v){
		heap_size=capacity=v.size();
		for(auto c:v)
			arr.push_back(c);
		for(T i=(v.size()-1)/2;i>=0;i-=1)
			PercolateDown(i);
	}
	T getMax(){
		if(heap_size==0){
			cout<<"Empty";
			return -1;
		}
		return arr[0];
	}
	void insert(T val){
		if(heap_size==capacity){
			cout<<"Capacity Full\n";
		}
		arr[heap_size++]=val;
		PercolateUp(heap_size-1);
	}
	void del(){
		if(heap_size==0) return;
		arr[0]=arr[--heap_size];
		PercolateDown(0);
	}
};
int main(){
	fastio
	int n,m;
	cin>>m;
	vector<int> v;
	for(int i=0;i<m;i+=1){
		cin>>n;
		v.push_back(n);
	}
	Heap<int> h1(n),h2(v);
	cout<<h2.getMax()<<endl;
	h2.del();
	h2.insert(0);
	cout<<h2.getMax()<<endl;
	h2.del();
	cout<<h2.getMax()<<endl;
	h2.del();
	cout<<h2.getMax()<<endl;
	h2.del();
	cout<<h2.getMax()<<endl;
	h2.del();
	cout<<h2.getMax()<<endl;
	h2.del();
}
