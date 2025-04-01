#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int x;

    while(cin>>s>>x)
    {
          int a[x];
        for(int i=0; i<x; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<x; i++)
        {
            cout<<s[a[i]-1];
        }
        cout<<endl;
    }

}
