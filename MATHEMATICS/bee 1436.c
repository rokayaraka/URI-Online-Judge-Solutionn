#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int n,x=1;
    int a[12];
    while(t--)
    {
        scanf("%d", &n);
        int res=0, res2;
        for(int i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
            res = i/2;
            res2= a[res];
        }
        printf("Case %d: %d\n", x,res2);
        x++;
    }
    return 0;
}
