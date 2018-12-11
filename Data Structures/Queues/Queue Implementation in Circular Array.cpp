#include<bits/stdc++.h>
using namespace std;

struct ArrayQueue{
	int front,rear,capacity;
	int *array;
};

ArrayQueue *CreateQueue(int size){
	ArrayQueue *Q;
	Q=(ArrayQueue*)malloc(sizeof(ArrayQueue));
	if(!Q){
		cout<<"Error";
		return nullptr;
	}
	Q->front=Q->rear=-1;
	Q->capacity=size;
	Q->array=(int*)malloc(sizeof(int)*Q->capacity);
	if(!Q->array){
		cout<<"Error";
		return nullptr;
	}
	return Q;
}
int IsEmptyQueue(ArrayQueue *Q){
	if(Q->front==Q->rear==-1)
		return 1;
	return 0;
}
int IsFullQueue(ArrayQueue *Q){
	if((Q->rear+1)%Q->capacity==Q->front)
		return 1;
	return 0;
}
int QueueSize(ArrayQueue *Q){
	return (Q->capacity - Q->front + Q->rear +1)%Q->capacity;
}

void EnQueue(ArrayQueue *Q,int data){
	if(IsFullQueue(Q)){
		cout<<"Overflow";
		return ;
	}
	else{
		Q->rear=(Q->rear+1)%Q->capacity;
		Q->array[Q->rear]=data;
		if(Q->front==-1)
			Q->front=Q->rear;
	}
}

int DeQueue(ArrayQueue *Q){
	if(IsEmptyQueue(Q)){
		cout<<"Underflow";
		return INT_MIN;
	}
	int data=Q->array[Q->front];
	if(Q->front==Q->rear)
		Q->front=Q->rear=-1;
	Q->front=(Q->front+1)%Q->capacity;
	return data;
}

void DeleteQueue(ArrayQueue *Q){
	if(Q){
		if(Q->array)
			free(Q->array);
		free(Q);
	}
}
int main(){/*
	int val,data;
	ArrayQueue *Q;
	Q=CreateQueue(6);
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
			cout<<	(Q);
			break;
		case 6:
			DeleteQueue(Q);
			break;
		default:
			break;
		}
	}*/
	return 0;
}
