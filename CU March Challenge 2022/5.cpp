//Ranjul's Game
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int v, e;
        cin >> v >> e;
        map<int, int> degree;

        for (int i = 0; i < e; i++)
        {
            int x, y;
            cin >> x >> y;
            degree[x]++;
            degree[y]++;
        }

        bool flag = false;
        for (auto &it : degree)
        {
            if (it.second % 2 == 1)
                flag = true;
        }

        if (e % 2 == 0)
            cout << 1 << "\n";
        else
            cout << (flag ? 2 : 3) << "\n";
    }
    return 0;
}