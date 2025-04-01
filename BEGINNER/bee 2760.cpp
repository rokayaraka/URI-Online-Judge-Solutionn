#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3;
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);
    cout<<s1<<s2<<s3<<endl;
    cout<<s2<<s3<<s1<<endl;
    cout<<s3<<s1<<s2<<endl;
    if(s1.size()>10)s1.resize(10);
    if(s2.size()>10)s2.resize(10);
    if(s3.size()>10)s3.resize(10);
    cout<<s1<<s2<<s3<<endl;
}
