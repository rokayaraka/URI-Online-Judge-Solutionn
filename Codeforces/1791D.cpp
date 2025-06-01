#include<bits/stdc++.h>
using namespace std;

int maxPossibleValue(const string& s)
{
    int n=s.length();
    vector<int>prefix(n), suffix(n);
    unordered_set<char> seen;

    seen.clear();
    for(int i=0; i<n;i++){
        seen.insert(s[i]);
        prefix[i]=seen.size();
        
    }

    seen.clear();
    for(int i=n-1;i>=0;i--)
    {
        seen.insert(s[i]);
        suffix[i]=seen.size();
    }

    int maxSum=0;
    for(int i=1;i<n;i++)
    {
        maxSum=max(maxSum,prefix[i-1]+suffix[i]);
    }

    return maxSum;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        cout<<maxPossibleValue(s)<<endl;
    }
}