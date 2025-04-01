#include<stdio.h>
int main()
{
    double a[12][12];
    char s;
    int x;
    scanf("%d", &x);
    scanf(" %c", &s);
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            scanf("%lf", &a[i][j]);
        }
    }

    double sum=0.0;
    for(int i=0;i<12;i++)
    {
        sum+=a[i][x];
    }
    if(s == 'S')
    {
        printf("%.1lf\n", sum);
    }
    else if(s =='M')
    {
        printf("%.1lf\n", sum/12.0);
    }

    return 0;
}
