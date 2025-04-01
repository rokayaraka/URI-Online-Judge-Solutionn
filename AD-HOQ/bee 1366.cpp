#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int x;
    int a,b;
    while(cin>>n &&n)
    {
        x=0;
        while(n--)
        {
            cin>>a>>b;
            x+=b/2;
        }
        cout<<x/2<<endl;
    }
}
