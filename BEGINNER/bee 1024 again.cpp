#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s,s1;
    getchar();
    while(t--)
    {

        getline(cin,s);
        int l=s.size();
        for(int i=0; i<l; i++)
        {
            if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')
                s[i]+=3;
        }
        int x=0;
        for(int i=l-1; i>=0; i--)
        {
            s1[x]=s[i];
            x++;
        }
        for(int i=(l/2); i<l; i++)
        {
            s1[i]-=1;
        }

        cout<<s1<<"\n";
    }

}

