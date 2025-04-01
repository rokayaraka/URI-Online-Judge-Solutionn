#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string s;

    int l;

    while(getline(cin,s))
    {
        int c1=0,c2=0,c3=0,c4=0;
        l=s.size();

        for(int i=0; i<l; i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
                c1++;
            else if(s[i]>='a'&& s[i]<='z')
                c2++;
            else if(s[i]>='0'&&s[i]<='9')
                c3++;
            else
                c4++;
        }
        if(l>=6 && l<=32)
        {
            if(c1==0||c2==0||c3==0||c4!=0)
                cout<<"Senha invalida."<<endl;
            else
                cout<<"Senha valida."<<endl;
        }
        else
        {
            cout<<"Senha invalida."<<endl;
        }

    }
}
