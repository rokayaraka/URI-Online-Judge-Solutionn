#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,c,res=0;
    while(1)
    {
        cin>>a>>b>>c;
        if(a==0 && b==0 && c==0)
            break;
        else
        {
            res = cbrt(a*b*c);
        }
        cout<<res<<endl;
    }
}
