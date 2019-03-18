#include<iostream>
#include<queue>
using namespace std;
int main()
{
	//Simple Queue
	/*int c=0;
	queue<int>Q;
	Q.push(5);
	Q.push(13);
	Q.push(0);
	Q.push(9);
	Q.push(4);
	while(!Q.empty())
	{
		Q.pop();
		c++;
	}
	cout<<c;*/
	
	//Priority Queue
	int c=0;priority_queue<int> pQ;
	pQ.push(5);
	pQ.push(13);
	pQ.push(0);
	pQ.push(9);
	pQ.push(4);
	while(!pQ.empty())
	{
		cout<<pQ.top()<<" ";
		pQ.pop();
		c++;
	}
	cout<<"\n"<<c;
	
}
