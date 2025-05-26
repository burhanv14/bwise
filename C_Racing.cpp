//Code by Burhan Vora - 22ucc123@lnmiit.ac.in
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> pbds;
//st.find_by_order(x) || st.order_of_key(x)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define civ(v) for(auto i = 0; i < v.size(); i++) cin >> v[i]
#define vi vector<int>
#define vl vector<ll>
#define si set<int>
#define sll set<ll>
#define umii unordered_map<int,int>
#define umll unordered_map<ll,ll>
#define forn(s,n) for(auto i = s; i < n; i++)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define eline cout << "\n"
#define coutvec(arr) for(auto i = 0; i < arr.size(); i++) cout << arr[i] << (i + 1 < arr.size() ? ' ' : '\n')

void solve(){
    int n;
    cin >> n;
    vi d(n);
    civ(d);
    vector<int> l(n+1), r(n+1);
    for(int i = 1; i <= n; i++) cin >> l[i] >> r[i];
    vector<int> low(n+1), high(n+1);
    low[0] = high[0] = 0;
    bool ok = true;
    for(int i = 1; i <= n; i++){
        int nl, nh;
        if(d[i-1] != -1){
            nl = low[i-1] + d[i-1];
            nh = high[i-1] + d[i-1];
        } else {
            nl = low[i-1];
            nh = high[i-1] + 1;
        }
        low[i]  = max(nl, l[i]);
        high[i] = min(nh, r[i]);
        if(low[i] > high[i]){
            ok = false;
            break;
        }
    }
    if(!ok){
        cout << -1 << '\n';
        return;
    }
    vi ans(n), h(n+1);
    h[n] = low[n];
    for(int i = n; i >= 1; i--){
        if(d[i-1] != -1) ans[i-1] = d[i-1];
        else ans[i-1] = (h[i] - 1 >= low[i-1] ? 1 : 0);
        h[i-1] = h[i] - ans[i-1];
    }
    coutvec(ans);
}

int main(){
    //fast;
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
