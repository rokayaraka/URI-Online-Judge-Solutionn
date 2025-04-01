#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,w,l;
    int i=1;
    while(cin>>r>>w>>l)
    {

        double res = sqrt((w*w)+(l*l));
        double cir = 2*r;
        if(res<=cir)
          printf("Pizza %d fits on the table.\n", i);
          else
            printf("Pizza %d does not fit on the table.\n", i);
        i++;

        }
}
