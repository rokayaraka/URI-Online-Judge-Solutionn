
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

        int res1=min(a,b);
        int res2=min(c,d);
        res1+=res2;
        int res3=min(max(a,b),max(c,d));
        int res4=min(res1,res3);
        int res5=res4*res4;
        cout<<res5<<endl;

}
