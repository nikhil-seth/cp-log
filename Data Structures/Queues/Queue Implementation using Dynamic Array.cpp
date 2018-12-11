#include<bits/stdc++.h>
using namespace std;

struct DynArrayQueue{
	int front,rear;
	int *array;
	int capacity;
};

DynArrayQueue *CreateQueue(){
	DynArrayQueue *Q;
	Q=(DynArrayQueue*)malloc(sizeof(DynArrayQueue));
	if(!Q){
		cout<<"Error";
		return nullptr;
	}
	Q->front=Q->rear=-1;
	Q->capacity=1;
	Q->array=(int*)malloc(sizeof(int)*Q->capacity);
	if(!Q->array){
		cout<<"Error";
		return nullptr;
	}
	return Q;
}

int IsEmptyQueue(DynArrayQueue *Q){
	if(Q->front==-1)
		return 1;
	return 0;
}
int IsFullQueue(DynArrayQueue *Q){
	if((Q->rear+1)%Q->capacity==Q->front)
		return 1;
	return 0;
}
int QueueSize(DynArrayQueue *Q){
	return (Q->capacity - Q->front + Q->rear + 1)%Q->capacity;
}
void ResizeQueue(DynArrayQueue *Q){
	Q->capacity*=2;
	realloc(Q->array,Q->capacity*sizeof(int));
	if(Q->front>Q->rear){
		for(int i=0;i<Q->front;i++)
			Q->array[i+Q->capacity/2]=Q->array[i];
		Q->rear=Q->rear+Q->capacity/2;
	}
}
void EnQueue(DynArrayQueue *Q,int data){
	if(IsFullQueue(Q))
		ResizeQueue(Q);
	Q->rear=(Q->rear+1)%Q->capacity;
	Q->array[Q->rear]=data;
	if(IsEmptyQueue(Q))
		Q->front=Q->rear;
}
int DeQueue(DynArrayQueue *Q){
	if(IsEmptyQueue(Q)){
		cout<<"Underflow";
		return INT_MIN;
	}
	int data=Q->array[Q->front];
	if(Q->rear==Q->front)
		Q->rear=Q->front=-1;
	else
		Q->front=(Q->front+1)%Q->capacity;
	return data;
}
void DeleteQueue(DynArrayQueue *Q){
	if(Q){
		if(Q->array)
			free(Q->array);
		free(Q);
	}
}
void Traverse(DynArrayQueue *Q){
	int t=Q->front;
	while(t!=Q->rear){
		cout<<Q->array[t]<<' ';
		t++;
		if(t%Q->capacity==0)
			t=0;
	}
	cout<<Q->array[t]<<endl;
}
int main(){
	/*int val,data;
	DynArrayQueue *Q;
	Q=CreateQueue();
	while(1){
		cin>>val;
		switch(val){
		case 1:
			cin>>data;
			EnQueue(Q,data);
			break;
		case 2:
			cout<<DeQueue(Q);
			break;
		case 3:
			cout<<QueueSize(Q);
			break;
		case 4:
			cout<<IsFullQueue(Q);
			break;
		case 5:
			cout<<IsEmptyQueue(Q);
			break;
		case 6:
			Traverse(Q);
			break;
		case 7:
			DeleteQueue(Q);
			break;
		default:
			break;
		}
	}*/
	return 0;
}
