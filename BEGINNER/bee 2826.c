#include<stdio.h>
#include<string.h>
int main()
{
    char s1[25], s2[25];
    scanf("%s %s", s1,s2);
    int cmp= strcmp(s1,s2);
    if(cmp<0)
    {
        printf("%s\n", s1);
        printf("%s\n", s2);
    }
    else
    {
        printf("%s\n", s2);
        printf("%s\n", s1);
    }
}
