#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int a[x];
    for(int i=0; i<x;i++)
    {
        cin>>a[i];
    }
    int res=0;
    for(int i=0; i<x-1;i++)
    {
        if(a[i]>a[i+1])
        {
            res = i+2;
            break;
        }
    }
    cout<<res<<endl;
}
