#include<bits/stdc++.h>
using namespace std;
int main()
{

    int p,q;
    int res;
    int temp;
    int a[100];
    while(cin>>p>>q)
    {

        for(int i=0; i<p; i++)
        {
            cin>>a[i];
        }

            for(int i=0; i<p-1; i++)
            {
                for(int j=i+1; j<p; j++)
                {
                    if(a[j]>a[i])
                    {
                        temp = a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
                }
            }

        for(int i=0; i<q; i++)
        {
            cin>>res;
            cout<<a[res-1]<<endl;
        }

    }

}
