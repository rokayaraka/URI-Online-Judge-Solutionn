#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x;
    while(cin>>x)
    {
        int sum=0;
        if(x==0)
            break;
        else
        {
            for(int i=0; sum+i<=x; i++)
            {
                sum+=i;
            }
        }
        cout<<sum<<" "<<x-sum<<endl;
    }
}
