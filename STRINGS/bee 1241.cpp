#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while(t--)
    {
      cin>>s1>>s2;
        int c=0;
        for(int i=s1.size(),j=s2.size(); i>=0;i--,j--)
        {
                if(s1[i]== s2[j])
                    c++;
                else
                    break;
        }
        if(c==s2.size()+1)
            cout<<"encaixa"<<endl;
        else
            cout<<"nao encaixa"<<endl;
    }
   return 0;
}
