#include<bits/stdc++.h>
using namespace std;
struct Queue
{
	int front,rear,size;
	unsigned capacity;
	int *arr;
};
struct Queue* createqueue(int capacity)
{
	struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
	queue->capacity=capacity;
	queue->front=queue->size=0;
	queue->rear=queue->capacity-1;
	queue->arr=(int *)malloc(sizeof(int)*queue->capacity);
	return queue;
}
void enqueue(struct Queue* queue,int x)
{
	if(queue->size==queue->capacity)
	{
		cout<<"Queue is full"<<endl;
		return;
	}
	queue->rear = (queue->rear+1)%queue->capacity;
	queue->arr[queue->rear]=x;
	queue->size+=1;
	cout<<"Queued item is "<<x<<endl;
}
int dequeue(struct Queue* queue)
{
	if(queue->size==0)
	{
		cout<<"Queue is empty"<<endl;
		return 0;
	}
	int x = queue->arr[queue->front];
	queue->front = (queue->front+1)%queue->capacity;
	queue->size-=1;
	return x;
}
int main()
{
	struct Queue * queue=createqueue(100);
	enqueue(queue,23);
	enqueue(queue,3);
	enqueue(queue,2);
	enqueue(queue,233);
	enqueue(queue,43);
	cout<<dequeue(queue)<<endl;
}
