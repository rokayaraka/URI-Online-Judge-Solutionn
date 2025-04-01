#include<stdio.h>
int main()
{
    int l,c;
    scanf("%d %d", &l,&c);
    int type1=(l*c)+((c-1)*(l-1));
    int type2=((l-1)*2)+((c-1)*2);
    printf("%d\n%d\n", type1,type2);
    return 0;
}

