#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);
    char s[10000], s1[10000];
    while(t--)
    {
        fflush(stdin);
        gets(s);
        int l=strlen(s);
      for(int i=0; i<l; i++)
      {
          if(s[i]>='A' && s[i]<='z' || s[i]>='a' && s[i]<='z')
            s[i]+=3;
      }
    int x=0;
    for(int i=l-1; i>=0;i--)
    {
        s1[x]=s[i];
       x++;
    }
    s1[x]='\0';
    for(int i=(l/2); i<l; i++)
    {
        s1[i]-=1;
    }
      printf("%s\n", s1);
    }
    return 0;
}
