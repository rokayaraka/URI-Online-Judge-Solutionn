#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n;
    while(t--)
    {
        scanf("%d",&n);
        char a1[10000]="1";
        char a2[10000];
        for(int i=0; i<n; i++)
        {
            int j=0,k=0;

            while(a1[j])
            {
                int c=1;
                while(a1[j]==a1[j+1])
                {
                    j++;
                    c++;
                }
                a2[k++]=c+'0';
                a2[k++]=a1[j];
                j++;
            }
            a2[k]='\0';
            strcpy(a1,a2);
        }
        printf("%s\n",a1);
    }
}

