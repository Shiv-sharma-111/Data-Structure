/*******************
  Ankit Sahu 
  SRMIST Chennai
 ***********************/
 
#include<bits/stdc++.h>
#define lli long long int
#define ci(x) cin>>x
#define print(x) cout<<x
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	
	lli arr[n];
	for(int i=0;i<n;i++)
	{
	cin>>arr[i];
	}
	
	lli first=arr[0],second=INT_MIN;
	
	for(int i=1;i<n;i++){
	    
	    if(arr[i]>first){
	        second=first;
	        first=arr[i];
	    }
	    
	    else if(arr[i]>second){
	        second=arr[i];
	    }
	}
	lli ans=first*second;
	cout<<first*second;
	cout<<endl;
	}
	return 0;
}
