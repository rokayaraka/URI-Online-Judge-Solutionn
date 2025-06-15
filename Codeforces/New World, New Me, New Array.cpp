#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n,k,p;
    while(t--){
        cin>>n>>k>>p;
        int max = n*p;
        int min = n*(-p);
 
        if(k<min || k>max)
        {
            cout<<"-1"<<endl;
        }
        else if(k==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            int operation = abs(k)/ p;
            int reminder = abs(k)%p;
 
            if (reminder>0){
                operation+=1;
 
            }
            cout<<operation<<endl;
        }
 
 
    }
}