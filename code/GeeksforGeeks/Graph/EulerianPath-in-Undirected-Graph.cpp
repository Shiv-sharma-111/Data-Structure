#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    vector<int> degree(n,0);
	    int mat[n][n];
	    
	    for(int i=0;i<n;i++){
	        int s=0;
	        for(int j=0;j<n;j++){
	            cin>>mat[i][j];
	            s+=mat[i][j];
	        }
	        degree[i]=s;
	    }
	    
	    int odddegree=0;
	    for(int i=0;i<degree.size();i++){
	        if(degree[i]%2!=0)
	        odddegree++;
	    }
	    
	    if(odddegree==2 || odddegree==0)
	    cout<<1<<endl;
	    else
	    cout<<0<<endl;
	    
	}
	
	return 0;
}
