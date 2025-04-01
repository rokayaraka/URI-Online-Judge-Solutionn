#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,c,r1,r2;
    int res1=0, res2=0, len=0;
    while(cin>>l>>c>>r1>>r2)
    {
        if(l==0 && c==0 && r1==0 && r2==0)
            break;
        len=(r1+r2)*2;
        res1=r1*2;
        res2=r2*2;
        if(l>c)
        {
            if(l>=len && c>=(res1 || res2))
                cout<<"S"<<endl;
            else
                cout<<"N"<<endl;
        }
        else if(l<c)
        {
            if(c>=len && l>=(res1 || res2))
                cout<<"S"<<endl;
            else
                cout<<"N"<<endl;
        }
        else if(l==c)
        {
            if(l>=len && l>=(res1 || res2))
                cout<<"S"<<endl;
            else if(c>=len && c>=(res1 || res2))
                cout<<"S"<<endl;
                else
                 cout<<"N"<<endl;
        }
    }
    return 0;
}

