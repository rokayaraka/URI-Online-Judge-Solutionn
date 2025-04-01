#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    string s;
    cin>>x>>y;
    int c=x;
    while(y--)
    {
        cin>>s;
        if(s[0]=='f')
            c++;
        else
            c--;
    }
    cout<<c<<endl;
}
