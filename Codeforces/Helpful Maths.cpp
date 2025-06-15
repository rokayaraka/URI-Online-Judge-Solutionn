#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int>n;
    int num=0;
    for(char c: s)
    {
        if(isdigit(c))
        {
            num=num*10+(c-'0');
 
        }
        else{
            n.push_back(num);
            num=0;
        }
    }
    n.push_back(num);
    sort(n.begin(),n.end());
    string sum;
    for(int i=0;i<n.size();i++)
    {
        sum+=to_string(n[i]);
        if(i!=n.size()-1)
        {
            sum+="+";
        }
    }
    cout<<sum<<endl;
 
}