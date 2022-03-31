//Welcome to Contest
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int y = 1;

        while (y < x)
            y *= 2;
        cout << y << "\n";
    }
    return 0;
}