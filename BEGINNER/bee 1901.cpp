#include<bits/stdc++.h>
using namespace std;

int main()
{
  set s;
    int n;
    int a[200][200];
    int x,y;
    while(cin>>n)
    {
        s.clear();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        n+=2;
        while(n--)
        {
            cin>>x>>y;
            x--,y--;
          s.insert(a[x][y]);
        }
        cout<<s.size()<<endl;
    }
}
