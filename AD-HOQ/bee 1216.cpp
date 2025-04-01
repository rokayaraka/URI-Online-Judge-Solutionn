#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int x;
    int sum=0;
    float avg=0.0;
    int c=0;
    while(getline(cin,s))
    {
    //    getline(cin,s);
       cin>>x;
       getchar();
       c++;
       sum+=x;
      
    }
     avg=(float)sum/c;
    printf("%.1f\n", avg);
}