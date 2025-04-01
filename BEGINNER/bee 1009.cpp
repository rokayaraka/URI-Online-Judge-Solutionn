#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    cin>>s;
    double x,y,z;
    cin>>x>>y;
    z=x+(y*15)/100;
    printf("TOTAL = R$ %.2lf\n", z);
}
