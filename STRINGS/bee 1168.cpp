#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    char s[100];
    cin>>t;
    while(t--)
    {
        cin>>s;
        int l=strlen(s);
        int led=0;
        for(int i=0; i<l; i++)
        {
            if(s[i]=='1')
                led+=2;
            else if(s[i]=='2'|| s[i]=='3'|| s[i]== '5')
                led+=5;
            else if(s[i]=='6'|| s[i]=='9'|| s[i]== '0')
                led+=6;
            else if(s[i]=='4')
                led+=4;
            else if(s[i]=='7')
                led+=3;
            else if(s[i]=='8')
                led+=7;
        }
        cout<<led<<" "<<"leds"<<"\n";
    }
}
