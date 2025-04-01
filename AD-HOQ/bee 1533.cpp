#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    int a1[1000],a2[1000];
    int maximum;
    while(cin>>x)
    {
        if(x==0)
            break;
        else
        {
            for(int i=0; i<x; i++)
            {
                cin>>a1[i];

                a2[i]= a1[i];
            }
            for(int i=0; i<x-1; i++)
            {
                for(int j=i+1; j<x; j++)
                {
                    if(a2[i]>a2[j])
                    {
                        maximum = a2[i];
                        a2[i]=a2[j];
                        a2[j]=maximum;
                    }
                }
            }
            int res2;
            int res = a2[x-2];
            for(int i=0; i<x; i++)
            {
                if(res== a1[i])
                {
                    res2=i+1;
                }
            }
            cout<<res2<<endl;

        }
    }
}
