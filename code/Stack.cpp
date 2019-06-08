#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
struct ArrayStack
{
	int top;
	unsigned capacity;
	int *array;
};
struct ArrayStack* createStack(int cap)
{
	struct ArrayStack *stack;
	stack=(struct ArrayStack*)malloc(sizeof(ArrayStack));
	stack->capacity=cap;
	stack->top=-1;
	stack->array=(int*)malloc(sizeof(int)*stack->capacity);
	return(stack);	
} 
int isFull(struct ArrayStack *stack)
{
	if(stack->top==stack->capacity-1)
	return 1;
	else
	return 0;
}
int isEmpty(struct ArrayStack *stack)
{
	if(stack->top==-1)
	return 1;
	else
	return 0;
}
void push(struct ArrayStack *stack,int item)
{
	if(!isFull(stack))
	{
		stack->top++;
		stack->array[stack->top]=item;
		return;
	}
}
int pop(struct ArrayStack *stack)
{
	int item;
	if(!isEmpty(stack))
	{
		item=stack->array[stack->top];
		stack->top--;
		return item;
	}
	return (-1);
}
int main()
{

}
