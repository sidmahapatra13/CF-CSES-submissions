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
        ll n, k, x;
        cin >> n >> k >> x;

        ll min_sum = (k*(k+1)) / 2;
        ll max_sum = (n*(n+1)) / 2 - ((n-k)*(n-k+1)) / 2;;

        if(x>= min_sum && x <= max_sum) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}