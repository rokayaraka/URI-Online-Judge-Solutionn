#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d", &t);
     long long int n;
    while(t--)
    {
    int c=0;
        scanf("%lld", &n);
        if(n==0 || n==1)
            c=1;
     for(int i=2;i<=sqrt(n);i++){

    if(n%i==0)
        {
            c++;
            break;
        }
            }
        if(c==0)
            printf("Prime\n");
        else
            printf("Not Prime\n");
    }
    return 0;
}
