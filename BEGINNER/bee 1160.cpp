#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    double x,y;
    int t;
    cin>>t;
    while(t--)
    {
        int c=0;
        cin>>a>>b>>x>>y;
        while(a<=b)
        {
            a*=(x/100.0)+1.0;
            b*=(y/100.0)+1.0;
            c++;
            if(c>100)
            {
                cout<<"Mais de 1 seculo."<<endl;
                break;
            }
        }
        if(c<=100)
            cout<<c<<" anos."<<endl;
    }
}
