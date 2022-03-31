//String Conversion
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int m;
        cin >> m;
        vector<vector<bool>> canGo(26, vector<bool>(26, 0));


        for (int i = 0; i < m; i++)
        {
            string s;
            cin >> s;
            int from = s[0] - 'a';
            int to = s[3] - 'a';
            canGo[from][to] = true;
        }

        for (int i = 0; i < 26; i++)
        {
            canGo[i][i] = true;
        }


        if (a.size() != b.size())
        {
            cout << 0 << "\n";
            continue;
        }

        for (int k = 0; k < 26; ++k)
        {
            for (int i = 0; i < 26; ++i)
            {
                for (int j = 0; j < 26; ++j)
                {
                    if (canGo[i][k] == true && canGo[k][j] == true)
                        canGo[i][j] = true;
                }
            }
        }
        
        bool flag = true;
        for (int i = 0; i < a.size(); i++)
        {
            if (canGo[a[i] - 'a'][b[i] - 'a'] == false)
            {
                cout << 0 << "\n";
                flag = false;
                break;
            }
        }
        if (flag)
            cout << 1 << "\n";
    }
    return 0;
}

