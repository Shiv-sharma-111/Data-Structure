#include <bits/stdc++.h>
#include <algorithm>
#define MOD 1000000007
#define mk make_pair
#define pb push_back
#define fi first
#define se second
#define endll "\n";
#define MAX 11
using namespace std;
typedef pair<int,int> pp;
void cinn(int &number)
{
    bool negative = false;
    register int c;
    number = 0;
    c = getchar();
    if (c=='-')
    {
        negative = true;
        c = getchar();
    }
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
    if (negative)
        number *= -1;
}
int flag1=0;
int hash1[MAX];
int hash2[MAX][2];
int hash3[2*MAX+1];
set<vector<int>> v;
vector<int> ans;
int sign(int i,int j){
    if(i>=j){
        return 0;
    }
    return 1;
}
int issafe(int i,int j,int n){
    if(i>0&&i<=n&&j>0&&j<=n&&hash1[j]==0&&hash3[i+j]==0&&hash2[abs(i-j)][sign(i,j)]==0){
        return 1;
    }
    return 0;
}
int bt(int i,int j,int n){
    if(i>n){
        for(int k=1;k<=n;k++){
            ans.push_back(hash1[k]);
        }
        v.insert(ans);
        ans.clear();
        return 1;
    }
    if(issafe(i,j,n)){
        hash1[j]=i;
        hash2[abs(i-j)][sign(i,j)]=1;
        hash3[i+j]=1;
        for(int k=1;k<=n;k++){
            if(bt(i+1,k,n)){
                flag1=1;
            }
        }
        hash1[j]=0;
        hash2[abs(i-j)][sign(i,j)]=0;
        hash3[i+j]=0;
    }
    return flag1;

}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        v.clear();
        flag1=0;
        int flag=0;
        for(int i=1;i<=n;i++){
            ans.clear();
            memset(hash1,0,sizeof(hash1));
            memset(hash2,0,sizeof(hash2));
            memset(hash3,0,sizeof(hash3));
            if(bt(1,i,n)){
                flag=1;
            }
       }
        if(flag==0){
            cout<<-1<<endll;
        }
        else{
            for(auto it=v.begin();it!=v.end();it++){
                ans=*it;
                cout<<"[";
                for(int i=0;i<ans.size();i++){
                    cout<<ans[i]<<" ";
                }
                cout<<"]"<<" ";
            }
            cout<<endll;
        }
    }
    return 0;
}
