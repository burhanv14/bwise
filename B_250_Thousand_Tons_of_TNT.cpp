// Code by Burhan Vora - 22ucc123@lnmiit.ac.in
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <climits>
using namespace std;
using namespace __gnu_pbds;
typedef tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> pbds;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define civ(v) for(auto i=0; i<v.size(); i++) cin >> v[i]
#define vi vector<int>
#define vl vector<long long>
#define umii unordered_map<int, int>
#define mii map<int, int>
#define umll unordered_map<long long, long long>
#define mll map<long long, long long>
#define forn(s,n) for(auto i=s; i<n; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define eline cout << "\n"
#define coutvec(arr) for(auto i=0; i<arr.size(); i++) cout << arr[i] << " "
#define all(x) x.begin(), x.end()

void solve() {
    ll n;
    cin >> n;
    vl arr(n);
    civ(arr);
    ll ans = 0;
    vl pref(n + 1, 0);
    
    forn(0, n)
        pref[i + 1] = pref[i] + arr[i];

    for (ll step = 1; step < n; step++) {
        
      if(n%step==0){
        ll maxm = LLONG_MIN;
        ll minm = LLONG_MAX;

        for (ll j = step; j <= n; j += step) {
            ll diff = pref[j] - pref[j - step];
            maxm = max(maxm, diff);
            minm = min(minm, diff);
        }
        ans = max(ans, maxm - minm);
      }
    }
    cout << ans << '\n';
}

int main() {
    // fast;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
