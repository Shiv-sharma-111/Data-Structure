//Introduction of Stack with Class
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
class Stack
{
	int top;
	public:
		int a[MAX];
		Stack()
		{
			top=-1;
		}
		bool push(int x);
		int pop();
		bool isEmpty();
};
bool Stack::push(int x)
{
	if(top>=MAX-1)
	{
		cout<<"Stack Over Flow"<<endl;
		return false;
	}
	top=top+1;
	a[top]=x;
	cout<<x<<"Pushed Into stack"<<endl;
	return true;
}
int Stack::pop()
{
	if(top<0)
	{
		cout<<"Stack Under flow"<<endl;
		return false;
	}
	else 
	{
	int x=a[top];
	top=top-1;
	return x;	
	}	
}
bool Stack::isEmpty()
{
	return (top<0);
}
int main()
{
	class Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	cout<<s.pop()<<" Popped from stack"<<endl;
	return 0;
}
