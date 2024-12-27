// Code by Burhan Vora - 22ucc123@lnmiit.ac.in
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<pair<long long,long long>, null_type, less<pair<long long,long long>>, rb_tree_tag, tree_order_statistics_node_update> pbds;
// st.find_by_order(x) || st.order_of_key(x)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define civ(v) for(auto i = 0; i < v.size(); i++) cin >> v[i]
#define vi vector<int>
#define vl vector<long long>
#define forn(s, n) for(auto i = s; i < n; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define eline cout << endl
#define coutvec(arr, j, n) for(int i = j; i < n; i++) cout << arr[i] << " "
#define inputn ll n; cin >> n;
#define maxheap priority_queue<int>
#define minheap priority_queue<int, vector<int>, greater<int>>
#define ppi pair<int, pair<int, int>>

ll countInversion(vl &sub1) 
{
    pbds st;
    ll ans = 0;
    for(ll i=0;i<sub1.size();i++) {
        ans += st.size() - st.order_of_key({-sub1[i],1e7});
        st.insert({sub1[i],i});
    } 
    return ans;
}

void solve() {
    ll n;
    cin >> n;
    vl a(n), b(n);
    forn(0, n) cin >> a[i];
    forn(0, n) cin >> b[i];

    vl sub1(n);
    forn(0, n) 
      sub1[i] = a[i] - b[i];

    cout << countInversion(sub1);
    eline;
}

int main() {
    fast;
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
