

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long a1, a2, a3;
    cin >> a1 >> a2 >> a3;

    //long long res = 2 * a2 - (a1 + a3);
    long long sum = a1+a3;
    long long target = 2*a2;

    long long opt=0;
    if (target==sum)
        opt = 0;
        else if(target>sum)
        opt=target-sum;
    else{
        long long res = sum-target;
        opt=(res+1)/2;

    }
        

    cout << opt << endl;
    return 0;
}