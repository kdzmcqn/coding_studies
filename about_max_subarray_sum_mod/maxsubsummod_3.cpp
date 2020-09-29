#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t-- > 0)
    {
        long long n, m, x, s = 0, ans = 0;
        set<long long> S;
        S.insert(0);
        cin >> n >> m;
        for (int i = 0; i < n; ++i)
        {
            cin >> x;
            s += x;
            s %= m;
            ans = max(ans, s);
            S.insert(s);

            auto it = S.lower_bound(s + 1);
            if (it != S.end())
                x = *it;

            ans = max(ans, (s - x + m) % m);
        }
        cout << ans << "\n";
    }
    return 0;
}
