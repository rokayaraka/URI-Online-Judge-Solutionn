#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int x;
    double res1,res2;
    cin>>t;
    while(t--)
    {
        cin>>x;
        res1= 1+8*x;
        res2=(-1+sqrt(res1))/2;
        cout<<(long long int)res2<<endl;
    }

}
