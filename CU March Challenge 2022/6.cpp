//Khatam, Bye-Bye, Tata
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<string, int> mm;
        vector<string> v;

        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            mm[s]++;
            v.push_back(s);
        }
        bool flag = true;
        for (auto &it : v)
        {
            string ss = "";
            for (int j = 0; j < it.size() - 1; j++)
            {
                ss.push_back(it[j]);
                if (mm.count(ss))
                {
                    cout << 1 << "\n";
                    flag = false;
                    break;
                }
            }
            if (flag == false)
                break;
        }

        if (flag)
            cout << 0 << "\n";
    }
    return 0;
}