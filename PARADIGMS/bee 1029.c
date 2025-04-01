#include<stdio.h>
int fibo(int n, int *call);
int main()
{
   int t;
   scanf("%d", &t);
   while(t--)
   {
       int x;
       scanf("%d", &x);
       int call =0;
       int result=fibo(x,&call);

       printf("fib(%d) = %d calls = %d\n",x,call*2,result);
   }
   return 0;
}
int fibo(int n,int *call)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else{
            (*call)++;
          return fibo(n-1,call)+fibo(n-2,call);
    }

}
