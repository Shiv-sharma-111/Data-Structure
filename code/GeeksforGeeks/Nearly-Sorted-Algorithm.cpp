/*
#define for(i,n) for(i=0;i<n;i++)
#define ll long long
#define push push_back
#define pop pop_back
#define clr(x) memset(x, 0, sizeof(x))
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef vector<int>		v;
int mpow(int base, int exp);
const int mod = 1000000007;
const int N = 3e5, M = N;
v g[N];
int a[N];
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int T;
  cin>>T;
  while(T--)
  {
    //enter your code here
    int n,k,i;
    cin>>n>>k;
    v vec;
    for(i,n)
    {
        int l;
        cin>>l;
        vec.push(l);
    }
    sortall(vec);
    for(i,n)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}

int mpow(int base, int exp) {
  base %= mod;
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = ((ll)result * base) % mod;
    base = ((ll)base * base) % mod;
    exp >>= 1;
  }
  return result;
}  Time taken 0.02
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,k;
         priority_queue<int, vector<int>,greater<int> > pq ;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            int k;
            cin>>k;
            pq.push(k);
        }
        for(int i=0;i<n;i++)
        {
            cout<<pq.top()<<" ";
            pq.pop();
        }
        cout<<endl;
    }
} // time taken 0.01 sec
