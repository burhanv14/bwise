// Code by Burhan Vora - 22ucc123@lnmiit.ac.in
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> pbds;
// st.find_by_order(x) || st.order_of_key(x)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define civ(v) for (auto i = 0; i < v.size(); i++) cin >> v[i]
#define vl vector<long long>
#define forn(s, n) for (auto i = s; i < n; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define eline cout << endl
#define all(x) x.begin(), x.end()

ll nCr(ll n, ll r) {
    if (r > n - r)
        return nCr(n, n - r);

    ll ans = 1;
    for (ll i = 0; i < r; i++) {
        ans = ans * (n - i) / (i + 1);
    }
    return ans;
}

void solve() {
    ll n, k, q;
    cin >> n >> k >> q;
    vl arr(n);
    civ(arr);

    ll ans = 0;
    ll pd = 0;
    forn(0,n)
    {
        if(arr[i] <= q)
            pd++;
        else
            pd = 0;
        ans += max((double)0, (double)pd - k + 1);
    }
    cout<<ans;
    eline;
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
