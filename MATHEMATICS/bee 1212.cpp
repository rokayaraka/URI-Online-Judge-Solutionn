#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y,carry,c,a,b;

    while(cin>>x>>y&&(x||y))
    {
        carry=c=0;
        while(x!=0 ||y!=0)
        {
            a=x%10;
            b=y%10;
            x=x/10;
            y=y/10;
            if((a+b+c)>=10)
            {
                c=1;
                carry++;
            }
            else
                c=0;
        }

        if(carry==0)
            cout<<"No carry operation."<<endl;
        else if(carry ==1)
            cout<<"1 carry operation."<<endl;
        else
            cout<<carry<<" carry operations."<<endl;
    }

}

