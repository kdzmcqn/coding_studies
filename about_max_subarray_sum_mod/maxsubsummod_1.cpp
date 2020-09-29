#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

long long mod;
long long arr[100005];

set<long long> f;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    scanf("%d", &T);
    while (T--) {
        int n;
        scanf("%d%lld", &n, &mod);
        for (int i = 0; i < n; ++i) {
            scanf("%lld", &arr[i]);
            arr[i] %= mod;
            if (i) arr[i] = (arr[i] + arr[i - 1]) % mod;
        }
        f.clear();
        f.insert(0);
        set<long long>::iterator it;
        long long ans = 0;
        for (int i = 0; i < n; ++i) {
            it = f.begin();
            if (it != f.end())
                ans = max(ans, arr[i] - *it);
            it = f.upper_bound(arr[i]);
            if (it != f.end())
                ans = max(ans, (arr[i] - *it + mod) % mod);
            f.insert(arr[i]);
        }
        printf("%lld\n", ans);
    }
    return 0;
}