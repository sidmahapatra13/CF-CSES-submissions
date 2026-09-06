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

    int n, m;
    cin >> n >> m;
    vector<string> grid(n);

    for(int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {

            if(grid[i][j] == '-') {
                cout << '-';
            }
            else {
                if((i + j) % 2 == 0) {
                    cout << 'B';
                }
                else {
                    cout << 'W';
                }
            }
        }
        cout << endl;
    }
    return 0;
}