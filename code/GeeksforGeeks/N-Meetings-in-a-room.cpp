#include<bits/stdc++.h>
using namespace std;
struct Meeting 
{
    int start,end,pos;
};
bool comparator(struct Meeting m1, struct Meeting m2)
{
    return (m1.end < m2.end);
}
vector<int> sol(int *s,int *f,int n)
{
    struct Meeting meet[n];
    for(int i=0;i<n;i++)
    {
        meet[i].start = s[i];
        meet[i].end = f[i];
        meet[i].pos = (i+1);
    }
    sort(meet, meet+n, comparator);
    vector<int> vec;
    vec.push_back(meet[0].pos);
    int Time = meet[0].end;
    for(int i=1;i<n;i++)
    {
        if(meet[i].start > Time)
        {
            vec.push_back(meet[i].pos);
            Time = meet[i].end;
        }
    }
    return vec;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int s[n], f[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>f[i];
        }
        vector<int> vec = sol(s,f,n);
        for(int i=0;i<vec.size();i++)
        {
            cout<<vec[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
