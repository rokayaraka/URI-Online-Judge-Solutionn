#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int x,y;
    int sum=0;
    while(cin>>n)
    {
        x=0;
        y=sqrt(n);
        while(y>=x)
        {
            sum=x*x+y*y;
            if(sum==n)
                break;
            else if(sum<n)
                x++;
            else
                y--;
        }
        if(sum==n)
        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

