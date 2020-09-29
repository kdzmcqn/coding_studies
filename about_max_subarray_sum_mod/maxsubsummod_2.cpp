#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;

int t;
int n;
ll m;
ll best;
set <ll> has;

int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d %lld", &n, &m);
        best = 0; has.clear(); has.insert(0ll);
        ll cur = 0;
        for (int i = 0; i < n; i++) {
            ll val; scanf("%lld", &val);
            cur = (cur + val) % m;
            set <ll>::iterator it = has.upper_bound(cur);
            if (it != has.end()) best = max(best, cur + m - *it);
            else best = max(best, cur - *has.begin());
            has.insert(cur);
        }
        printf("%lld\n", best);
    }
    return 0;
}