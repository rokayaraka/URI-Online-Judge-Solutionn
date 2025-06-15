#include<bits/stdc++.h>
using namespace std;
int res(int t, int n, vector<int>&v)
{
    int nth=v[n-1];
    int c=0;
    for(int i=0;i<t;i++)
    {
        if(v[i]>=nth && v[i]>0)
        {
            c++;
        }
    }
     return c;
}
int main()
{
    int t,n;
    cin>>t>>n;
    vector<int>v(t);
    for(int i=0;i<t;i++)
    {
        cin>>v[i];
    }
    cout<<res(t,n,v)<<endl;
}