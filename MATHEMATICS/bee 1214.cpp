#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float x=0.0;
        int sum=0;
        int c=0;
        int n;
        float avg;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        x=(float)sum/(float)n;
        for(int i=0; i<n; i++)
        {
            if(x<(float)a[i])
            {
                c++;
            }
        }
        avg= (c*100)/(float)n;
        printf("%.3f%%\n", avg);
    }
}
