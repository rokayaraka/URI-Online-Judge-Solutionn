#include<stdio.h>
#include<string.h>

int main()
{
    int x;
    char s1[50],s2[50];
    scanf("%d", &x);
    int l1,l2,l;
    for(int i=0; i<x; i++)
    {
        scanf("%s %s", s1,s2);
        l1= strlen(s1);
        l2 = strlen(s2);
        if(l1>=l2)
        {
            l=l1;
        }
        else
        {
            l=l2;
        }
        for(int j=0; j<l; j++)
        {
            if(j<l1)
                printf("%c", s1[j]);
            if(j<l2)
                printf("%c", s2[j]);
        }
        printf("\n");
    }
    return 0;
}
