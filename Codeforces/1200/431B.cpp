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

    int g[5][5];
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> g[i][j];
        }
    }

    vector<int> p = {0,1,2,3,4};
    int max_happiness = 0;

    do {
        int current_happiness = 
            (g[p[0]][p[1]] + g[p[1]][p[0]]) + (g[p[2]][p[3]] + g[p[3]][p[2]]) +
            (g[p[1]][p[2]] + g[p[2]][p[1]]) + (g[p[3]][p[4]] + g[p[4]][p[3]]) +
            (g[p[2]][p[3]] + g[p[3]][p[2]]) +
            (g[p[3]][p[4]] + g[p[4]][p[3]]);
        max_happiness = max(max_happiness, current_happiness);
    } while (next_permutation(p.begin(), p.end()));

    cout << max_happiness << endl;
    return 0;
}