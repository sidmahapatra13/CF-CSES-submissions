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
        string s, t;
        cin >> s >> t;
        int n = s.size();
        int m = t.size();

        vector<int> freq_t(26, 0);
        for(int i = 0; i < m; i++) {
            freq_t[t[i] - 'A']++;
        }

        for(int i = n-1; i >= 0; i--) {
            if(freq_t[s[i] - 'A'] > 0) {
                freq_t[s[i] - 'A']--;
            }
            else {
                s[i] = '.';
            }
        }

        string final = "";
        for(int i = 0; i < n; i++) {
            if(s[i] != '.') {
                final += s[i];
            }
        }

        if(final == t) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}