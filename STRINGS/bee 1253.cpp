#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    int n;
    int res;
    while(t--)
    {
        cin>>s;
        cin>>n;
        for(int i=0;i<s.size();i++)
        {
            res = s[i]-n;
            if(res<65)
            {
                res= 91-(65-res);
            }
            printf("%c",res);
        }
        cout<<endl;
    }
}
