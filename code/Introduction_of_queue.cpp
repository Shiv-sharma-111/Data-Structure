#include<bits/stdc++.h>
#include<stdlib.h>
#include<cstring>
#include<stdbool.h>
using namespace std;
#define MAX 6
int intArray[MAX];
int itemCount=0;

int peek()
{
	return intArray[itemCount-1];
}
bool isEmpty()
{
	return itemCount==0;
}
bool isFull()
{
	return itemCount==MAX;
}
int size()
{
	return itemCount;
}
void insert(int data)
{
	int i=0;
	if(!isFull())
	{
		//if queue is empty insert the data
		if(itemCount==0)
		{
			intArray[itemCount++]=data;
		}
		else
		{
			for(i=itemCount-1;i>=0;i--)
			{
				if(data>intArray[i])
				{
					intArray[i+1]=intArray[i];
				}
				else
				{
					break;
				}
			}
			intArray[i+1]=data;
		    itemCount++;	
		}
	}
}
int removeData()
{
	return intArray[--itemCount];
}
int main()
{
	insert(3);
	insert(5);
	insert(9);
	insert(1);
	insert(12);
	insert(15);
	if(isFull())
	{
		cout<<"Queue is Full"<<endl;
	}
	int num=removeData();
	cout<<"Element removed: "<<num<<endl;
	insert(16);
	insert(17);
	insert(19);
	cout<<"Element at front: "<<peek()<<endl;
	cout<<"-----------------------"<<endl;
	cout<<"Index: 5 4 3 2 1 0"<<endl;
	cout<<"Queue:    ";
	while(!isEmpty())
	{
		int n=removeData();
		cout<<n<<" ";
	}
}

