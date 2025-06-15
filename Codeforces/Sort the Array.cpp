#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> sorted_a = a;
    sort(sorted_a.begin(), sorted_a.end());
    
    int l = 0, r = n - 1;
    
    // Find the first and last positions where the array differs from the sorted version
    while (l < n && a[l] == sorted_a[l]) {
        l++;
    }
    while (r > l && a[r] == sorted_a[r]) {
        r--;
    }
    
    if(l>=r)
    {
        cout<<"yes"<<endl;
        cout<<"1"<<" "<<"1"<<endl;
    }
    else{
    // Reverse the segment [l, r]
    reverse(a.begin() + l, a.begin() + r + 1);
    
    if (a == sorted_a) {
        cout << "yes" << endl;
        cout << l + 1 << " " << r + 1 << endl;
    } else {
        cout << "no" << endl;
    }
}
   
}