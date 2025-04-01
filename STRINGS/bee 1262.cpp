#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int x;
    int l;
    while(cin>>s>>x)
    {
        l=s.size();
        int a=0,b=0;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='R')
            {
                if(b==0)

                    a++;
                    b++;


                if(b==x)

                    b=0;

            }
                else
                {
                    a++;
                    b=0;
                }

        }
        cout<<a<<endl;
    }
}
