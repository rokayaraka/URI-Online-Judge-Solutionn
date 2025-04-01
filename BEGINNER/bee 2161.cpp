#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,res=0.0;
    cin>>x;
    while(x--)
    {
        res+=6.0;
        res=1.0/res;
    }
    res+=3.0;
    printf("%0.10lf\n", res);
    return 0;
}
