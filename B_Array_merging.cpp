// Code by Burhan Vora - 22ucc123@lnmiit.ac.in
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> pbds;
// st.find_by_order(x) || st.order_of_key(x)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define civ(v) for(auto i=0;i<v.size();i++) cin>>v[i]
#define vi vector<int>
#define vl vector<long long>
#define umii unordered_map<int, int>

void solve() {
    ll n;
    cin >> n;
    vl a(n);
    civ(a);
    vl b(n);
    civ(b);

    umii amp, bmp;

     for (int i = 0; i < n; ) {
        int cur = a[i], count = 0;
        while (i < n && a[i] == cur) {
            count++;
            i++;
        }
        amp[cur] = max(amp[cur], count);
    }

    for (int i = 0; i < n; ) {
        int cur = b[i], count = 0;
        while (i < n && b[i] == cur) {
            count++;
            i++;
        }
        bmp[cur] = max(bmp[cur], count);
    }

    int ans = 0;
    for (auto it : amp) {
        ans = max(ans, it.second + bmp[it.first]);
    }
    
    for (auto it : bmp) {
        ans = max(ans, it.second + amp[it.first]);
    }

    cout << ans << "\n";
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
