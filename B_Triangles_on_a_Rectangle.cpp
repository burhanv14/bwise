#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> pbds;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define civ(v) for(auto i = 0; i < v.size(); i++) cin >> v[i]
#define vl vector<long long>
#define eline cout << "\n"
#define all(x) x.begin(), x.end()

void solve() {
    ll w, h;
    cin >> w >> h;
    
    ll ans = 0;
    for(int i=0;i<4;i++)
    {
        ll k;
        cin>>k;
         
        vl arr(k);
        civ(arr);
        ans = max(ans, (arr[k-1] - arr[0]) * (i<2?h:w));
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
