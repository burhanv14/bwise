//Code by Burhan Vora - 22ucc123@lnmiit.ac.in
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

// Policy-based DS
typedef tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> pbds;

// Macros
#define fast              ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll                long long
#define civ(v)            for(auto i = 0; i < v.size(); i++) cin >> v[i]
#define vi                vector<int>
#define vl                vector<long long>
#define usi               unordered_set<int>
#define usll              unordered_set<long long>
#define si                set<int>
#define sll               set<long long>
#define umii              unordered_map<int,int>
#define mii               map<int,int>
#define umll              unordered_map<long long,long long>
#define mll               map<long long,long long>
#define forn(s,n)         for(auto i = s; i < n; i++)
#define yes               cout << "YES\n"
#define no                cout << "NO\n"
#define con               continue
#define eline             cout << "\n"
#define coutvec(arr)      for(auto i = 0; i < arr.size(); i++) cout << arr[i] << " "
#define maxheap           priority_queue<int>
#define minheap           priority_queue<int, vector<int>, greater<int>>
#define ppi               pair<int, pair<int,int>>
#define pll               pair<long long,long long>
#define pii               pair<int,int>
#define pb                emplace_back
#define all(x)            x.begin(), x.end()

bool check(ll k, vector<vector<ll>> &a, ll tot) {
    forn(0, a.size()) {
        ll f = a[i].size();
        tot = tot - f + 1; 
        if (a[i].back() >= (k + tot))
            return false;
    }
    return true;
}

void solve() {
    ll n;
    cin >> n;
    ll tot = 0;
    vector<vector<ll>> a;

    forn(0, n) {
        ll k;
        cin >> k;
        tot += k;
        vl temp(k);
        civ(temp);
        a.pb(temp);
    }

    for (ll i = 0; i < n; i++) {
        ll maxm = 0;
        for (ll j = 0; j < a[i].size(); j++) {
            maxm = max(maxm, a[i][j] - j);
        }
        a[i].pb(maxm);
    }

    sort(all(a), [](const vector<ll> &x, const vector<ll> &y) {
        return x.back() > y.back();
    });

    ll low = 0, high = 1e9+1, ans = high;
    while (low <= high) {
        ll mid = (low + high) / 2;
        if (check(mid, a, tot)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << ans << "\n";
}

int main() {
    fast;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
