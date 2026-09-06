#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<ll> b(n);

    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    ll mini = LLONG_MAX, maxi = LLONG_MIN;
    for(int i = 0; i < n; i++) {
        mini = min(mini, b[i]);
        maxi = max(maxi, b[i]);
    }

    int cnt_min = 0, cnt_max = 0;
    for(int i = 0; i < n; i++) {
        if(b[i] == mini) {
            cnt_min++;
        }
        if(b[i] == maxi) {
            cnt_max++;
        }
    }

    if (mini == maxi) {
        ll num_ways = 1LL * n * (n - 1) / 2;
        cout << 0 << " " << num_ways;
    }

    else {
        ll diff = maxi - mini;
        ll num_ways = 1LL * cnt_max * cnt_min;
        cout << diff << " " << num_ways;
    }

    return 0;
}