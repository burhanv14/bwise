#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> pbds;

#define fast              ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll                long long
#define civ(v)            for (size_t i = 0; i < (v).size(); i++) cin >> (v)[i]
#define vi                vector<int>
#define vl                vector<long long>
#define umii              unordered_map<int,int>
#define forn(s,n)         for (int i = (s); i < (n); i++)
#define yes               cout<<"YES\n"
#define no                cout<<"NO\n"
#define eline             cout<<"\n"
#define coutvec(arr)      for (size_t i = 0; i < (arr).size(); i++) cout << (arr)[i] << " "
#define maxheap           priority_queue<int>
#define minheap           priority_queue<int, vector<int>, greater<int>>
#define ppi               pair<int,pair<int,int>>
#define pll               pair<long long,long long>
#define pii               pair<int,int>
#define pb                emplace_back
#define all(x)            (x).begin(), (x).end()

void solve() {
    int n; 
    cin >> n;

    vi uni(n); 
    civ(uni);

    vl skills(n);
    for (int i = 0; i < n; i++) cin >> skills[i];

    vector<vl> adj(n + 1);
    for (int i = 0; i < n; i++) {
        int u = uni[i];
        if (u >= 0 && u <= n) adj[u].push_back(skills[i]);
        else {
            if ((int)adj.size() <= u) adj.resize(u + 1);
            adj[u].push_back(skills[i]);
        }
    }

    for (auto &v : adj) {
        if (!v.empty()) sort(all(v), greater<long long>());
    }

    vector<vl> pref; 
    pref.reserve(adj.size());
    for (size_t i = 0; i < adj.size(); i++) {
        if (adj[i].empty()) continue;
        int m = (int)adj[i].size();
        pref.push_back(vl(m + 1, 0));
        for (int j = 0; j < m; j++) {
            pref.back()[j + 1] = pref.back()[j] + adj[i][j];
        }
    }

    vl ans(n + 1, 0);
    for (auto &p : pref) {
        int m = (int)p.size() - 1;
        for (int k = 1; k <= m; k++) {
            int take = (m / k) * k;
            ans[k] += p[take];
        }
    }

    for (int k = 1; k <= n; k++) {
        cout << ans[k] << (k == n ? '\n' : ' ');
    }
}

int main() {
    fast;
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
