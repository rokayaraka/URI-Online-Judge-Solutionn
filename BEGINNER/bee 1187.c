
#include<stdio.h>
int main()
{
    double a[12][12];
    char s;
    int av=0;
    double sum=0.0;
    scanf(" %c", &s);
    for(int i=0; i<12; i++)
    {
        for(int j=0; j<12; j++)
        {
            scanf("%lf", &a[i][j]);
        }
    }
    int cs=11;
    int ce=11;

    for(int i=1; i<11; i++)
    {
        for(int j=cs; j<=ce; j++)
        {
            sum+=a[i][j];
            av++;
        }
        if(i<5)
        {
            cs--;
        }
        else if(i>=6)
        {
            cs++;
        }
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
