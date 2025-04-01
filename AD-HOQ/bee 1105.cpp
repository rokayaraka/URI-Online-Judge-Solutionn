#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    int x,y,z;
    int t;
    while(1)
    {
        cin>>a>>b;
        if(a==0 && b==0)
            break;


            int ara[a];
           t=0;
            for(int i=1;i<=a;i++)
            {
                cin>>ara[i];
            }
            while(b--)
            {
                cin>>x>>y>>z;
                ara[x]-=z;
                ara[y]+=z;
            }
          for(int i=1;i<=a;i++)
            {
                if(ara[i]<0){
                    t=1;
                break;
                }
            }

            if(t==1)
                cout<<"N"<<endl;
            else
                cout<<"S"<<endl;
        }
    }

