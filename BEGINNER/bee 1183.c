#include<stdio.h>
int main()
{
    double a[12][12];
    int x=11;
    char s;
    scanf(" %c", &s);
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            scanf("%lf", &a[i][j]);
        }
    }
    int av=0;
    double sum=0.0;
    for(int i=1;i<12;i++)
    {
        for(int j=x;j<12;j++)
        {
            sum+=a[i][j];
            av++;
        }
        x--;
    }
     if(s == 'S')
    {
        printf("%.1lf\n", sum);
    }
    else if(s =='M')
    {
        printf("%.1lf\n", sum/av);
    }

    return 0;

}
