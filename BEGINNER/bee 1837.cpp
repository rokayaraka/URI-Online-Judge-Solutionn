#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    int x,y,z,i;
    cin>>a>>b;
    if(a<0)
    {
        x=b;
        if(b<0)
            x=b*-1;
        for(i=0;i<x;i++)
        {
            y=a-i;
            if(y%b==0)
                break;
        }
        z=y/b;
    }
    else
    {
        z=a/b;
        i=a%b;
    }
    cout<<z<<" "<<i<<endl;
}

