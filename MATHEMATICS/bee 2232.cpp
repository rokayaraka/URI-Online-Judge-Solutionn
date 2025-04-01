#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=0;
        for(int i=0;i<n;i++)
        {

            sum+=pow(2,i);
        }
        cout<<sum<<endl;
    }
}
