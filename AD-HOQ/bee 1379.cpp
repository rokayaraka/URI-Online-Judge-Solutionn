#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    while(cin>>a>>b)
    {
        if(a==0 && b==0)
            break;
        else
        {
            cout<<a-(b-a)<<endl;
        }
    }
}
