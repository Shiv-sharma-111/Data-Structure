#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        ll n;
        cin>>n;
        vector<ll> v1,v2;
        for(ll i=0;i<n;i++)
        {
            ll k;
            cin>>k;
            if(k%2==0)
            {
                v1.push_back(k);
            }
            else
            {
                v2.push_back(k);
            }
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        for(ll i=v2.size()-1;i>=0;i--)
        {
            cout<<v2[i]<<" ";
        }
        for(ll i=0;i<v1.size();i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<endl;
    }
}
