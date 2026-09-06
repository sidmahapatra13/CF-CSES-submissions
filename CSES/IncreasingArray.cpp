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
    vector<ll> x(n);

    for(int i = 0; i < n; i++) {
        cin >> x[i];
    }

    ll cnt = 0;
    for(int i = 1; i < n; i++) {
        if(x[i] < x[i-1]) {
            cnt += x[i-1] - x[i];
            x[i] = x[i-1];
        }
    }
    cout << cnt;
    return 0;
}