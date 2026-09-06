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

    if(n % 4 == 1 || n % 4 == 2) {
        cout << "NO" << endl;
        return 0;
    }

    else {
        cout << "YES" << endl;
    }

    vector<int> a, b;
    if(n % 4 == 0) {
        for(int i = 1; i <= n; i += 4) {
            a.push_back(i);
            a.push_back(i + 3);

            b.push_back(i + 1);
            b.push_back(i + 2);
        }
    }
    else { // n % 4 == 3
        // Handle 1,2,3 first
        a.push_back(1);
        a.push_back(2);
        b.push_back(3);

        // Then process groups of 4
        for (int i = 4; i <= n; i += 4) {
            a.push_back(i);
            a.push_back(i + 3);

            b.push_back(i + 1);
            b.push_back(i + 2);
        }
    }

    cout << a.size() << endl;
    for (int x : a)
        cout << x << ' ';
    cout << endl;

    cout << b.size() << endl;
    for (int x : b)
        cout << x << ' ';
    cout << endl;

    return 0;
}