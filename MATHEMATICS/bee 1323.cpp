#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    while(cin>>x&&x)
    {
        long long int res=(x*(x+1)*(2*x+1))/6;
        cout<<res<<endl;
    }
}
