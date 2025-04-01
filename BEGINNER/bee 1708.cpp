#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b;
    cin>>a>>b;
    a=abs(a-b);
    double c=ceil(b/a);
    cout<<c<<endl;
    return 0;
}
