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
        ll n;
        cin >> n;

        if(n < 4 || n % 2 == 1) {
            cout << -1 << endl;
        }
        else {
            ll mini = (n+5)/6;
            ll maxi = n/4;
            cout << mini << " " << maxi << endl;
        }
    }
    return 0;
}