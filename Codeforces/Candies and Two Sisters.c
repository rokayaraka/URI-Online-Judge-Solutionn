#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    int n;
 
    while(t--)
    {
        scanf("%d", &n);
        int r=0;
        if(n%2==0)
        {
            r=n/2-1;
        }
        else
        {
            r=n/2;
        }
        printf("%d\n", r);
    }
 
}