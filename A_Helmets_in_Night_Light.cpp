#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> pbds;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define civ(v) for (auto i = 0; i < v.size(); i++) cin >> v[i]
#define vi vector<int>
#define vl vector<long long>
#define usi unordered_set<int>
#define usll unordered_set<long long>
#define si set<int>
#define sll set<long long>
#define umii unordered_map<int, int>
#define mii map<int, int>
#define umll unordered_map<long long, long long>
#define mll map<long long, long long>
#define forn(s, n) for (auto i = s; i < n; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define con continue
#define eline cout << endl
#define coutvec(arr) for (auto i = 0; i < arr.size(); i++) cout << arr[i] << " "
#define maxheap priority_queue<int>
#define minheap priority_queue<int, vector<int>, greater<int>>
#define ppi pair<int, pair<int, int>>
#define pii pair<ll, ll>
#define pb emplace_back
#define all(x) x.begin(), x.end()

void solve() {
    ll n, p;
    cin >> n >> p;
    vl a(n);
    civ(a);
    vl b(n);
    civ(b);

    ll minm = p;
    forn(0, n)
        minm = min((ll)minm, (ll)b[i]);

    if (minm == p) {
        cout << p * n;
        eline;
        return;
    }

    priority_queue<pii, vector<pii>, greater<pii>> hp;
    forn(0, n)
        hp.push({b[i], a[i]});

    ll tot = 1, ans = p;
    while (tot < n && hp.top().first < p) {
        auto curr = hp.top();
        hp.pop();
        ll nos = max((ll)0,min(n - tot, curr.second));
        tot += nos;
        ans += curr.first * nos;
    }

    if (tot < n) {
        ans += p * (n - tot);
    }

    cout << ans;
    eline;
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
