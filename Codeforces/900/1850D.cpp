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
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if(n == 1) {
            cout << 0 << endl;
            continue;
        }

        sort(a.begin(), a.end());

        ll longest_length = 0;
        ll counter = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] - a[i-1] <= k) {
                counter++;
            }
            else {
                counter = 1;
            }

            longest_length = max(longest_length, counter);
        }

        cout << n - longest_length << endl;
    }
    return 0;
}