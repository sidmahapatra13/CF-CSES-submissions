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

    string s;
    cin >> s;

    int freq[26] = {};

    for(char c : s) {
        freq[c - 'a']++;
    }

    int odd = 0;
    for(int i = 0; i < 26; i++) {
        if(freq[i] % 2 == 1) {
            odd++;
        }
    }

    if(odd <= 1 || odd % 2 == 1) {
        cout << "First" << endl;
    }
    else {
        cout << "Second" << endl;
    }

    return 0;
}