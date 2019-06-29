#include<bits/stdc++.h>
using namespace std;     //implementation of stack with the help of array-----------------------
struct Stack
{
	int top;
	unsigned capacity;
	int *arr;
};
struct Stack *  createstack(int capacity)
{
	struct Stack * stack = (struct Stack*)malloc(sizeof(struct Stack));
	stack->capacity= capacity;
	stack->top=-1;
	stack->arr = (int*)malloc(sizeof(stack->capacity));
	return stack;
}
void push(struct Stack* stack, int x)
{
	if(stack->top==stack->capacity)
	{
		cout<<"Stack is full"<<endl;
		return;
	}
	stack->arr[++stack->top]=x;
	return;
}
int pop(struct Stack * stack)
{
	if(stack->top==-1)
	{
		cout<<"stack is empty"<<endl;
		return -1;
	}
	return stack->arr[stack->top--];
}
int top(struct Stack * stack)
{
	return stack->top;
}
int main()
{
	struct Stack *stack = createstack(100);
	push(stack,20);
	push(stack,30);
	push(stack,40);
	cout<<"Popped value is:"<<pop(stack)<<endl;
	cout<<"topvalue is :"<<top(stack)<<endl;
}
