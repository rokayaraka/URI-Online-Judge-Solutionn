#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    for(int i=0; i<t; i++)
    {
        getline(cin,s);
        if(s[0]>96 && s[0]<123)
        {
            cout<<s[0];
        }

        for(int j=1; j<s.size(); j++)
        {
            if(s[j]>96 && s[j]<123)
            {
                if(s[j-1]<96 || s[j-1]>123)
                {
                    cout<<s[j];
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
