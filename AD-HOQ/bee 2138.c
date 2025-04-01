#include<stdio.h>
int main()
{
    char x[100];
    while(scanf("%s", &x)!=EOF)
    {
        int l=strlen(x);
        int a[10]={0};
        for(int i=0; i<l;i++)
        {
            if(x[i]== '0')
            a[0]++;

            else if(x[i]== '1')
            a[1]++;

            else if(x[i]== '2')
            a[2]++;

            else if(x[i]== '3')
            a[3]++;

            else if(x[i]== '4')
            a[4]++;

            else if(x[i]== '5')
            a[5]++;

            else if(x[i]== '6')
            a[6]++;

            else if(x[i]== '7')
            a[7]++;

            else if(x[i]== '8')
            a[8]++;

            else if(x[i]== '9')
            a[9]++;
            }

            int b=a[0],z=0;
            for(int i=0;i<10;i++)
            {
                if(a[i]>b){
                    b=a[i];
                     z=i;
                }
            }
            printf("%d\n", z);
    }
}
