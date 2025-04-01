#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    int a,b;
    while(t--)
    {
        cin>>s;
        a=0;
        b=0;

      for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
                break;
            if(s[i]=='<')
                b++;
            if(s[i]=='>')
            {
                if(b>0)
                {
                    a++;
                    b--;
                }
            }

        }
        cout<<a<<endl;
    }
}
