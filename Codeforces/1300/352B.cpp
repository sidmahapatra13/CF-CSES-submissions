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

    map<int, vector<int>> mp;

    // Store all positions of every number
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp[x].push_back(i);
    }

    // Store answers: {x, common_difference}
    vector<pair<int, int>> ans;

    for(auto &[x, positions] : mp) {

        if(positions.size() == 1) {
            ans.pb({x, 0});
            continue;
        }

        int diff = positions[1] - positions[0];

        bool ok = true;
        //Are all consecutive diffs equal
        for(int i = 2; i < positions.size(); i++) {
            if((positions[i] - positions[i-1]) != diff) {
                ok = false;
                break;
            }
        }

        if(ok) {
            ans.pb({x, diff});
        }
    }

    cout << ans.size() << endl;
    for (auto [x, diff] : ans) {
        cout << x << " " << diff << '\n';
    }
    
    return 0;
}