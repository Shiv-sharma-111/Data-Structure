//STL-- Standard Template Library.
//1.Container 2.Algorithm 3.Iterator.
//Algorithm act on container(STL).
//Container library is a collection of classes.
#include<iostream>
#include<vector>
#include<array>
#include<tuple>
#include<list>
#include<map>
using namespace std;
int main()
{
	//Array in STL
	array<int,5>obj; //1st way to defined array
	array<int,4>obj1={1,2,3,4}; //2nd Way
	cout<<obj1.at(2)<<endl;//not filled block automatically becomes Zero(0)
	cout<<obj1[2]<<endl;
	cout<<obj1.front()<<endl;
	cout<<obj1.back()<<endl;
	obj1.fill(0);
	cout<<obj1.at(2)<<endl;
	//swap function used for 2 array of same type and same size
	//obj.swap(obj1);
	cout<<obj1.size()<<endl;
	//begin and end function used in iterator
	cout<<"END OF ARRAY-------------------------------------------"<<endl;
	//Pair in STL
	//pair is not a container class 
	pair<string,int> p1;
	pair<float,int> p2;
	p2=make_pair(2.34,4);//insert values in pairs
	cout<<p2.first<<endl;
	cout<<p2.second<<endl;
	cout<<"End of Pair--------------------------------------------"<<endl;
	//Tuple in STL
	//we can pair multiple object in the tuple
	tuple<string,int,int> t1;
	t1=make_tuple("Shivam",12,143);
	cout<<get<0>(t1)<<endl;
	//compare operate used in tuple
	cout<<"End of Tuple------------------------------------------"<<endl;
	//Vector in Tuple
	//vector class come in the container category.
	vector<int> v1={1,2,3};
	//vector<char>cv(5)--5 char element stored.
	//vector<int>v---0 length vector
	//vector<int>v(5,10)---10 is inserted in all 5 blocks.
	//vector<int>v
	cout<<v1[2]<<endl; //we can use subscript operator in vector
	v1.push_back(10);
	v1.push_back(29);
	v1.pop_back();
	cout<<v1.size()<<endl;//total element in the vector not blocks
	cout<<v1.capacity()<<endl;
	//v1.clear()--it removes all the element form the vector
	cout<<v1.at(3)<<endl;
	//front and back() function
	vector<int>::iterator it=v1.begin();
	vector<int>::iterator it1=v1.end();
	v1.insert(it+1,35);
	cout<<v1[1]<<endl;
	cout<<"End of Vector------------------------------------------"<<endl;
	//List in STL
	//vector support random access but in list sequentially accessed
	list<int>l{11,2,3};
	//[] operator is not used becoz it bidirectional
	list<int>:: iterator p=l.begin();
	while(p!=l.end())
	{
		cout<<*p<<" ";
		p++;
	}
	cout<<l.size()<<endl;
	//push_back()   push_front()  pop_Back()  pop_front() ............
	l.sort();
	//reverse() reverse the whole list
	//remove --perticular element 
	l.remove(2);
	//clear() deletes all element from the list
	cout<<"End of List-------------------------------------------"<<endl;
	//Map in STL
	//replicate associative array, index is string
	//each key is unique
	map <int,string> m;
	m[12]="shivam";
	m[121]="nikita";
	m[14]="saumya";
	m[124]="shilpi";
	//at()  []  size() empty() insert() clear()
	cout<<"End of Whole STL----------------------------------------"<<endl;
	
	
}

