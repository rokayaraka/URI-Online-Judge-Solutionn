#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,sum,mod;
    string s;
    while (cin >> t)
    {
        if(t==0)
            break;
        else
        {
            getchar();
            cin >> s;
            sum = 90;
            for (int i = 0; i<s.size(); i++)
            {
                if (s[i] == ' ')
                    continue;
                if (s[i] == 'D')
                    sum-= 90;
                else
                    sum+= 90;
            }
            mod = sum% 360;
            if (mod== 0)
                cout << "L" << endl;
            else if (mod== 90)
                cout << "N" << endl;
            else if (mod== 180)
                cout << "O" << endl;
            else
                cout << "S" << endl;
        }
    }
    return 0;
}
