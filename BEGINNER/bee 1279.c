#include<stdio.h>
int main(){
int y;
while(scanf("%d", &y)!=EOF)
{
  if(y%4==0 && y%100!=0 || y%400==0)
  {
       if(y%15==0)
  {
      printf("This is leap year.\nThis is huluculu festival year.\n");
  }
 else if(y%55==0)
  {
        printf("This is leap year.\nThis is bulukulu festival year.\n");
  }
  else
      printf("This is leap year.\n");
  }
  else if(y%15==0)
  {
      printf("This is huluculu festival year.\n");
  }
  else if(y%55==0)
  {
      printf("This is bulukulu festival year.\n");
  }
  else
  {
      printf("This is an ordinary year.\n");
  }
  printf("\n");
}
return 0;
}
