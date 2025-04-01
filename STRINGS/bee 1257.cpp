#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int a;
    while(x--)
    {
        string s;
        cin>>a;
        int  sum=0;
        for(int i=0; i<a; i++)
        {
            cin>>ws;// compiler ignore buffer
            getline(cin,s);
            for(int j=0; j<s.size(); j++)
            {
                sum+=s[j]-'A'+i+j;
            }
        }
        cout<<sum<<endl;
    }
}


