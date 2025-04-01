
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    int res,total;
    while(cin>>t>>n)
    {
        if(t==0 && n==0)
            break;
        else
        {
             total=3*n;
             res=0;
            for(int i=0; i<t; i++)
            {
                string s;
                int x;
                cin>>s>>x;
                res+=x;
            }
        }
        cout<<total-res<<endl;
    }
}
