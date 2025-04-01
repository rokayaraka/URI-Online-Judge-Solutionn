#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    int c=0,res=0;
    cin>>x>>y;
    int a[y];
    for(int i=0;i<y;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<y;i++)
    {
        if(a[i]>a[i-1])
            res=(a[i]-a[i-1]);
        else
            res=(a[i-1]-a[i]);
        if(res<=x)
            c++;
    }
    if(c==y-1)
        cout<<"YOU WIN"<<endl;
    else
        cout<<"GAME OVER"<<endl;

}
