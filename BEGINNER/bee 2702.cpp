#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,y1,y2,z1,z2;
    int x,y,z,sum=0;
    cin>>x1>>y1>>z1>>x2>>y2>>z2;
    x=x1-x2;
    y=y1-y2;
    z=z1-z2;
    if(x<0)
        sum+=abs(x);
    if(y<0)
        sum+=abs(y);
    if(z<0)
        sum+=abs(z);
    cout<<sum<<endl;
}
