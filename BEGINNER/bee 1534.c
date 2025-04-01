#include<stdio.h>
int main()
{
    int a[100][100];
    int x,z;
    while(scanf("%d", &x)!=EOF)
    {
        z=x-1;
        for(int i=0; i<x; i++)
        {
            for(int j=0; j<x; j++)
            {
                if(i==j)
                    a[i][j]=1;
                else
                    a[i][j]=3;

                if(j==z)
                    a[i][j]=2;
            }
            z--;
        }
        for(int i=0; i<x; i++)
        {
            for(int j=0; j<x; j++)
            {
                printf("%d", a[i][j]);
            }
            printf("\n");
        }

    }
    return 0;
}
