// Code by Burhan Vora - 22ucc123@lnmiit.ac.in
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve() {
    string s;
    cin >> s;
    ll n = s.length();
    if (count(s.begin(), s.end(), '1') == n) {
        cout << n * n << '\n';
        return;
    }
    string double_s = s + s;
    ll max_ones = 0, curr = 0;

    for (ll i = 0; i < 2 * n; ++i) {
        if (double_s[i] == '1') {
            curr++;
            max_ones = max(max_ones, curr);
        } else {
            curr = 0;
        }
    }
    max_ones = min(max_ones, n);

    ll ans;
    if (max_ones & 1)
        ans = ((max_ones + 1) / 2) * ((max_ones + 1) / 2);
    else
        ans = (max_ones / 2) * (max_ones / 2 + 1);

    cout << ans << '\n';
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
