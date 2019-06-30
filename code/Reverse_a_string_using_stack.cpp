#include<bits/stdc++.h>
using namespace std;      //Program completed -----------------------------------
struct Stack
{
	int top;
	unsigned capacity;
	char *arr;
};
struct Stack* createstack(int capacity)
{
	struct Stack* stack=(struct Stack*)malloc(sizeof(struct Stack));
	stack->capacity=capacity;
	stack->top=-1;
	stack->arr = (char *)malloc(sizeof(char)*stack->capacity);
	return stack;
	
}
void push(struct Stack * stack, char ch)
{
	if(stack->top==stack->capacity-1)
	{
		cout<<"Stack is Full"<<endl;
		return;
	}
	stack->arr[++stack->top]=ch;
}
char pop(struct Stack* stack)
{
	if(stack->top==-1)
	{
		cout<<"stack is empty"<<endl;
		return '1';
	}
	return stack->arr[stack->top--];
}
int main()
{
	string str;
	getline(cin,str);
	int n=str.size();
	struct Stack * stack= createstack(n);
	for(int i=0;i<n;i++)
	{
		push(stack,str[i]);
	}
	for(int i=0;i<n;i++)
	{
		cout<<pop(stack);
	}
}
