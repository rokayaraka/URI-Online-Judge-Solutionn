#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long int k;
    int ar[10000];
    while(cin>>k && k!=0)
    {
        n=0;
        j=0;
        if(k==0)break;
        for (long long int i = 1; i<=k; i+=2,j++)
        {
            n +=i;
            if(n>k) break;
            if(i>1) cout << " ";
            cout << n ;
        }
        cout << endl;
    }
    return 0;
}
