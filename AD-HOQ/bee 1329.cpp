#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
        break;
        int a[n],c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            c1++;
            else
            c2++;
        }
        cout<<"Mary won "<<c1<<" times and John won "<<c2<<" times"<<endl;
    }
}