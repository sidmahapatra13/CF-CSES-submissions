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

        if(n == 1) {
            cout << 0 << endl;
        }
        else {
            map<ll, int> mp;
            for(int i = 0; i < n; i++) {
                mp[a[i]]++;
            }

            int curr_highest_freq = 0;
            for(auto it : mp) {
                curr_highest_freq = max(curr_highest_freq, it.second);
            }

            int operations = 0;
            while (curr_highest_freq < n) {
                operations++;
                if(curr_highest_freq * 2 <= n) {
                    operations += curr_highest_freq;
                    curr_highest_freq *= 2;
                }
                else {
                    operations += n - curr_highest_freq;
                    curr_highest_freq = n;
                }
            }
            cout << operations << endl;
        }
    }
    return 0;
}