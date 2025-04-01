#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int x,y,j;
    j=1;
    while(t--)
    {
        cin>>x>>y;
        int res=0;

        for(int i=2; i<=x; i++)
        {
            res=(res+y)%i;

        }

        printf("Case %d: %d\n",j++,res+1);

    }
}
