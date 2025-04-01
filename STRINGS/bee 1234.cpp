#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
        int x=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]!=' ')
            {
                x++;
                if(s[i]>96 && x%2==1)
                {
                    s[i]=s[i]-32;
                }
                else if(s[i]<96 && x%2==0)
                {
                    s[i]=s[i]+32;
                }
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
