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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        if(n - k == 1) {
            cout << "YES" << endl;
            continue;
        }

        vector<int> freq(26, 0);
        for(int i = 0; i < n; i++) {
            freq[s[i] - 'a']++;
        }

        int odd_freq = 0;
        for(int i = 0; i < 26; i++) {
            odd_freq += freq[i] % 2;
        }

        if(odd_freq > k + 1) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }

    return 0;
}