#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int x;
    int res,sum;
    while(t--)
    {
        cin>>x;
        res=x/2;
        sum=0;
        for(int i=1; i<=res; i++)
        {
            if(x%i==0)
                sum+=i;
        }
        if(sum==x)
            cout<<x<<" eh perfeito"<<endl;
        else
            cout<<x<<" nao eh perfeito"<<endl;
    }
}
