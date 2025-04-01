#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int x,y;
    int res=0,temp=0;
    while(t--)
    {
        cin>>x>>y;
        if(x<y)
        {
            temp=x;
            x=y;
            y=temp;
        }
        while(x%y!=0)
        {
            res=x;
            x=y;
            y=res%x;
        }
        cout<<y<<endl;
    }

}
