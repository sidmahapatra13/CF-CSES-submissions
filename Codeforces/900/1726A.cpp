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

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int ans = a[n-1] - a[0];

        for(int i = 0; i < n - 1; i++) {
            ans = max(ans, a[n-1] - a[0]);

            ans = max(ans, a[n-1] - a[i]);

            ans = max(ans, a[i+1] - a[0]);

            ans = max(ans, a[i] - a[i+1]);
        }
        cout << ans << endl;
    }
    return 0;
}