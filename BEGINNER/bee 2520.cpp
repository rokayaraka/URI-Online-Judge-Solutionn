#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int a,b,p,q,x,y;
    int res=0;
    while(scanf("%d %d", &a,&b)!=EOF)
    {
        int arr[a][b];

        for(int i=0; i<a; i++)
        {
            for(int j=0; j<b; j++)
            {

                scanf("%d", &arr[i][j]);
                if(arr[i][j]==1)
                {
                    x=i;
                    y=j;
                }
                else if(arr[i][j]==2)
                {
                    p=i;
                    q=j;
                }

            }

        }


        res=abs(x-p)+abs(y-q);
        cout<<res<<endl;

    }
}
