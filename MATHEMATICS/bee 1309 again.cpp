#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    while(cin>>s1>>s2)
    {
        int j=0;
        string s;
        for(int i=s1.size()-1; i>=0; i--)
        {
            if(j==3)
            {
                s.push_back(',');
                j=0;
            }
            s.push_back(s1[i]);
            j++;
            if(i==0)
                s.push_back('$');
        }
        reverse(s.begin(),s.end());
        for(int i=0; i<s.size(); i++)
        {
            cout<<s[i];
        }
        if(s2.size()==1)
            cout<<"."<<"0"<<s2<<endl;
        else
            cout<<"."<<s2<<endl;
    }
}

