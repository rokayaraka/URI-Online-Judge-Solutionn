#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    int sum;
    while(cin>>x>>y)
    {
        sum=0;
        while(y!=0)
        {
            sum+=y%10;
            y=y/10;
        }
        if(sum%3==0)
            cout<<sum<<" sim"<<endl;
        else
            cout<<sum<<" nao"<<endl;
    }

}
