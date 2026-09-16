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

    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = k-1; i < n; i++) {
        if (a[i] != a[k-1]) {
            cout << -1 << endl;
            return 0;
        }
    }

    int lastDiff = -1;
    for(int i = k-2; i >= 0; i--) {
        if (a[i] != a[k-1]) {
            lastDiff = i;
            break;
        }
    }

    cout << lastDiff + 1 << endl;

    return 0;
}