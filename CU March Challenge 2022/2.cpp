//Binary challenge
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, m;
        cin >> l >> m;
        int ans = 0;

        for (int i = l; i <= m; i++)
        {
            ans += __builtin_popcount(i);   //Inbuilt function to count set bit in a number
        }

        cout << ans << "\n";
    }
    return 0;
}