// Code by Burhan Vora - 22ucc123@lnmiit.ac.in
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

// Policy-based data structure
typedef tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> pbds;

// Macros
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define civ(v) for(auto i = 0; i < v.size(); i++) cin >> v[i]
#define vi vector<int>
#define vl vector<long long>
#define forn(s, n) for(auto i = s; i < n; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
    }
    
    int x = m + arr[0].first;
    int y = m + arr[0].second;
    int upx = arr[0].first;
    int upy = arr[0].second;
    int tot = m * n * 4; 
    
    for (int i = 1; i < n; i++) {
        int curr = 0;
        
        upx += arr[i].first;
        upy += arr[i].second;

        if (upx < x) {
            curr += (x - upx);
        }
        if (upy < y) {
            curr += (y - upy);
        }
        
        tot -= (curr * 2);
        x += arr[i].first;
        y += arr[i].second;
    }
    
    cout << tot << endl;
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
