#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    int c=0;
    for(int i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            c++;
        }
    }
    cout<<c<<" valores pares"<<endl;
}