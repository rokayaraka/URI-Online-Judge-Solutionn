#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b;
  int ara[1000],temp[1000];
  int f,c;
  while(cin>>a>>b)
  {
      c=0;
      f=0;

      if(a==0 && b==0)
        break;
      for(int i=0; i<a;i++)
      {
          cin>>ara[i];
          temp[i]=ara[i];
      }

      for(int i=0;i<a;i++)
      {

          for(int j=i;j<a;j++)
          {
              if(ara[i]==temp[j])
              {
                  c++;
                  temp[j]=0;
              }

          }
          if(c>=b)
          {
              f++;
          }
          c=0;
      }
      cout<<f<<endl;
  }
}
