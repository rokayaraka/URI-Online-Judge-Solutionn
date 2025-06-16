#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int left = 0, right = n - 1;
    int s_sereja = 0, s_dima = 0;
    bool sereja = true;
    // bool turn = true;
    while (left <= right)
    {
        int res;
        if (arr[left] > arr[right])
        {
            res = arr[left];
            left++;
        }
        else
        {
            res = arr[right];
            right--;
        }

        if (sereja)
        {
            s_sereja += res;
        }

        else
        {
            s_dima += res;
        }

        // turn = !turn;
        sereja = !sereja;
    }
    cout << s_sereja << " " << s_dima << endl;
}