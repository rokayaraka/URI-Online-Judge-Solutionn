#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x;
    int b,g;
    while(cin>>x)
    {
        if(x==0)
            break;
        else
        {
            double avg=x/90.0;
            b=floor(avg*1);
            g=ceil(avg*7);
        }
        cout<<"Brasil "<<b<<" x Alemanha "<<g<<endl;
    }
}
