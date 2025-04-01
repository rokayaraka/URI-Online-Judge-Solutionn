#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    getline(cin,s1);
    while(getline(cin,s2))
    {
        int l1=0,l2=0;
        for(int i=0;i<s1.size();i++)
        {
            for(int j=0;j<s2.size();j++)
            {
                if(s1[i]==s2[j])
                {
                    l2=0;
                    for(int k=j,l=i;k<s2.size(),l<s1.size();k++,l++)
                    {
                        if(s2[k]!=s1[l])
                            break;
                        l2++;
                    }
                    if(l2>l1)
                        l1=l2;
                }
            }
        }
        cout<<l1<<endl;
        getline(cin,s1);
    }
}
