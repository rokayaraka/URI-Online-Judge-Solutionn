#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n==0 || n==1)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int n;
    cin>>n;
    int c=0;

    while(n>0)
    {
        int i=1;
        while(fact(i)<=n)
        {
            i++;
        }
        i--;
        n-=fact(i);
        c++;
    }
    cout<<c<<endl;
}

