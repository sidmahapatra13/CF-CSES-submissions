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
        vector<ll> a(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int ans = 0;
        for(int i = n - 2; i >= 0; i--) {
            while(a[i] >= a[i+1]) {
                ans++;
                a[i] /= 2;
                if(a[i] == 0) break;
            }

            if(a[i] == 0 && a[i+1] == 0) {
                ans = -1;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}