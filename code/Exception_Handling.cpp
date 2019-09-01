#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x=-1;
	cout<<"Before try Block:"<<endl;
	try
	{
		cout<<"Inside try Block:"<<endl;
		if(x<0)
		{
			throw x;
			cout<<"After throw(Never executed"<<endl;
		}
	}
	/*catch(int x)
	{
		cout<<"Exception Caught"<<endl;
	}*/
	
	/*catch(char *excp)
	{
		cout<<"Caught"<<excp;
	}
	catch(...)
	{
		cout<<"Default Exception:"<<endl;
	}*/
	//if a exception is thrown and not caught anywhere, the program terminates abnormally
	catch(char x)
	{
		cout<<"Caught";
	}
	cout<<"After catch (Will be Executed)"<<endl;
	return 0;
}
