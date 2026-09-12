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
        vector<int> a(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int cnt_zero = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] == 0) cnt_zero++;
        }

        bool found_zero = false;
        int l = 0;
        int r = n-1;
        
        while(a[l] == 0) {
            l++;
        }

        while(a[r] == 0) {
            r--;
        }

        for(int i = l; i <= r; i++) {
            if(a[i] == 0) {
                found_zero = true;
            }
        }

        if(cnt_zero == n) {
            cout << 0 << endl;
        }
        else if(!found_zero) {
            cout << 1 << endl;
        }
        else {
            cout << 2 << endl;
        }
    }
    return 0;
}