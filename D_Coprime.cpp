//Code by Burhanuddin Vora - 22ucc123@lnmiit.ac.in
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> pbds;
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
#define eline cout << "\n"
#define coutvec(arr) for (auto i = 0; i < arr.size(); i++) cout << arr[i] << " "
#define maxheap priority_queue<int>
#define minheap priority_queue<int, vector<int>, greater<int>>
#define ppi pair<int, pair<int, int>>
#define pll pair<long long, long long>
#define pii pair<int, int>
#define pb emplace_back
#define all(x) x.begin(), x.end()

map<pii, int> mp;
vector<vector<int>> coPrimes(1e3+1, vector<int>(1e3+1, 0));

int gcd(int n, int m) {
    if (n < m) return gcd(m, n);
    if (mp.find({n, m}) != mp.end()) return mp[{n, m}];
    ll r;
    while (m > 0) {
        r = n % m;
        n = m;
        m = r;
    }
    return mp[{n, m}] = n;
}

void solve() {
    int n;
    cin >> n;
    vl a(n);
    civ(a);
    int ans = -1;
    umii indices;
    forn(0, n) {
        indices[a[i]] = i;
    }
    for(int i=1;i<=1000;i++) {
        for (int j = 1; j <= 1000; j++) {
            if (coPrimes[i][j] == 1) {
                if (indices.find(i) != indices.end() && indices.find(j) != indices.end()) {
                    ans = max(ans, indices[i] + indices[j]);
                }
            }
        }
    }

    if(ans<0)
        cout<<ans;
    else
        cout << ans+2;
    eline;
}

int main() {
    int t = 1;
    cin >> t;
    for(int i=1;i<=1000;i++) {
        for (int j = 1; j <= 1000; j++) {
            if (gcd(i, j) == 1) {
                coPrimes[i][j] = 1;
            }
        }
    }
    while (t--) {
        solve();
    }
    return 0;
}
