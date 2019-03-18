#include<iostream>
#include<stack>
using namespace std;
stack<int> sortStack(stack<int>&input)
{
	stack<int> t;
	while(!input.empty())
	{
		int tmp=input.top();
		input.pop();
		while(!t.empty()&&t.top()>tmp)
		{
			input.push(t.top());
			t.pop();
		}
		t.push(tmp);
	}
	return t;
}
int main()
{
	int c=0,sum=0;
	stack<int> m;
	m.push(34);
	m.push(3);
	m.push(31);
	m.push(98);
	m.push(92);
	m.push(23);
	stack<int> t=sortStack(m);
	cout<<"Sorted numbers are:\n";
	while(!t.empty())
	{
		cout<<t.top()<<" ";
		t.pop();
	}
	
	
	
	
	
	
	
	/*cout<<m.size()<<endl;//use of size function
	//counting number of element
	while(!m.empty())//use of empty function
	{
		sum+=m.top();//use of top function
		m.pop();
		c++;
	}
	cout<<c<<" "<<sum<<endl;*/
	
}
