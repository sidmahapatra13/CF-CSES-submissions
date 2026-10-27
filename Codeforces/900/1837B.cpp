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
        string s;
        cin >> n >> s;

        int cnt = 1, maxDepth = 1;
        for(int i = 1; i < n; i++) {
            if(s[i] == s[i-1]) {
                cnt++;
            }
            else {
                cnt = 1;
            }
            maxDepth = max(maxDepth, cnt);
        }
        maxDepth = max(maxDepth, cnt);
        cout << maxDepth + 1 << endl;
    }
    return 0;
}