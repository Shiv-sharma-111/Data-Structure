#include<bits/stdc++.h>
using namespace std;
struct Queue
{
	int front ,rear,size;
	unsigned capacity;
	int *arr;
};
struct Queue* createQueue(unsigned capacity)
{
	struct Queue* queue=(struct Queue*)malloc(sizeof(struct Queue));
	queue->capacity=capacity;
	queue->front=queue->size=0;
	queue->rear=capacity-1;
	queue->arr=(int *)malloc(sizeof(int)*queue->capacity);
	return queue;
}
int isFull(struct Queue* queue)
{
	return (queue->size==queue->capacity);
}
int isEmpty(struct Queue* queue)
{
	return (queue->size==0);
}
void enqueue(struct Queue* queue,int data)
{
	if(!isFull(queue))
	{
		queue->rear=(queue->rear+1)%queue->capacity;
		queue->arr[queue->rear]=data;
		queue->size=queue->size+1;
		cout<<data<<" enqueued to queue"<<endl;
	}
}
int dequeue(struct Queue* queue)
{
	if(!isEmpty(queue))
	{
		int item=queue->arr[queue->front];
		queue->front=(queue->front+1)%queue->capacity;
		queue->size=queue->size-1;
		return item;
	}
}
int front(struct Queue* queue)
{
	if(isEmpty(queue))
	{
		return INT_MIN;
	}
	return queue->arr[queue->front];
}
int rear(struct Queue* queue)
{
	if(isEmpty(queue))
	{
		return INT_MIN;
	}
	return queue->arr[queue->rear];
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	struct Queue* queue=createQueue(1000);
	enqueue(queue,10);
	enqueue(queue,20);
	enqueue(queue,30);
	enqueue(queue,40);
	cout<<dequeue(queue)<<" dequeued from the queue"<<endl;
	cout<<"Front Item is:"<<front(queue)<<endl;
	cout<<"Rear Item is:"<<rear(queue)<<endl;
}
