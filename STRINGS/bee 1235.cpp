#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    getchar();
    string s;
    int j,l;
   while(t--)
    {
        getline(cin,s);
        l=s.size();

        for(j=(l/2)-1; j>=0; j--)
        {
           cout<<s[j];
        }

        for(j=l-1; j>=l/2; j--)
        {
           cout<<s[j];
        }

        cout<<endl;

    }
}

