//Code by Burhan Vora - 22ucc123@lnmiit.ac.in
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> pbds;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define civ(v) for(auto i = 0; i < v.size(); i++) cin >> v[i]
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
#define forn(s, n) for(auto i = s; i < n; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define con continue
#define eline cout << "\n"
#define coutvec(arr) for(auto i = 0; i < arr.size(); i++) cout << arr[i] << " "
#define maxheap priority_queue<int>
#define minheap priority_queue<int, vector<int>, greater<int>>
#define ppi pair<int, pair<int, int>>
#define pll pair<long long, long long>
#define pii pair<int, int>
#define pb emplace_back
#define all(x) x.begin(), x.end()

tuple<int, int, int> get_best3(const vector<int>& a) {
    int mx1 = -1, mx2 = -1, mx3 = -1;
    int idx1 = -1, idx2 = -1, idx3 = -1;

    for (int i = 0; i < a.size(); i++) {
        if (mx1 == -1 || a[i] > a[mx1]) {
            mx3 = mx2;
            mx2 = mx1;
            mx1 = i;
        } else if (mx2 == -1 || a[i] > a[mx2]) {
            mx3 = mx2;
            mx2 = i;
        } else if (mx3 == -1 || a[i] > a[mx3]) {
            mx3 = i;
        }
    }
    return {mx1, mx2, mx3};
}

void solve() {
    ll n;
    cin >> n;
    vi a(n), b(n), c(n);
    civ(a);
    civ(b);
    civ(c);

    int ans = 0;
    auto [x1, x2, x3] = get_best3(a);
    auto [y1, y2, y3] = get_best3(b);
    auto [z1, z2, z3] = get_best3(c);

    int candidates[] = {x1, x2, x3};
    int b_candidates[] = {y1, y2, y3};
    int c_candidates[] = {z1, z2, z3};

    for (int x : candidates) {
        for (int y : b_candidates) {
            for (int z : c_candidates) {
                if (x != y && x != z && y != z) {
                    ans = max(ans, a[x] + b[y] + c[z]);
                }
            }
        }
    }

    cout << ans << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
