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
    ll sx, sy, ex, ey;
    cin >> t >> sx >> sy >> ex >> ey;

    string wind;
    cin >> wind;

    for(int i = 0; i < t; i++) {
        if (sx == ex && sy == ey) {
            cout << i << endl;
            return 0;
        }

        char dir = wind[i];
        if(dir == 'E' && sx < ex) sx++;
        else if(dir == 'S' && sy > ey) sy--;
        else if(dir == 'W' && sx > ex) sx--;
        else if(dir == 'N' && sy < ey) sy++;

        if(sx == ex && sy == ey) {
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}