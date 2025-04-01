#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    int res;
    while(cin>>x && x!=0)
    {
        cin>>y>>z;
        res=(x*y*z)/(z-x);
        if(res>1)
        {
            cout<<res<<" paginas"<<endl;
        }
        else
        {
            cout<<res<<" pagina"<<endl;
        }
    }
    return 0;
}
