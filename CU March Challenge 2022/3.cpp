//Can you divide by 3
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, a, b;
        cin >> n >> a >> b;

        vector<int> v = {2, 4, 6, 8};
        int till = -1;

        if (n == 2)
        {
            cout << ((a + b) % 3 == 0 ? "YES" : "NO") << "\n";
            continue;
        }
        else
        {
            bool flag = true;
            ll sum = a + b, currDigit = 0;
            n -= 2;

            while (n > 0)
            {
                currDigit = sum % 10;
                if (currDigit == 0)
                {
                    cout << (sum % 3 == 0 ? "YES" : "NO") << "\n";
                    flag = false;
                    break;
                }
                else if (binary_search(v.begin(), v.end(), currDigit)) // Checking if currDigit is present in v or not
                {
                    till = currDigit;
                    break;
                }
                else
                {
                    sum += currDigit;
                    n--;
                }
            }

            if (flag == false)
                continue;

            if (till != -1)
            {
                for (int i = 0; i < n % 4; i++)
                {
                    sum += till;
                    till *= 2;
                    till %= 10;
                }
            }
            sum += n / 4 * (20LL);

            cout << (sum % 3 == 0 ? "YES" : "NO") << "\n";
        }
    }
    return 0;
}