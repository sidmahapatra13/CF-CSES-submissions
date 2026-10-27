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
        ll a, b;
        int n;
        cin >> a >> b >> n;

        vector<ll> tools(n);
        for(int i = 0; i < n; i++) {
            cin >> tools[i];
        }

        ll max_time = b;
        for(int i = 0; i < n; i++) {
            max_time += min(tools[i], a-1);
        }
        cout << max_time << endl;
    }

    return 0;
}