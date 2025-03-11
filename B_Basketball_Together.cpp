// Code by Burhan Vora - 22ucc123@lnmiit.ac.in
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> pbds;
// st.find_by_order(x) || st.order_of_key(x)

#define ll long long
#define civ(v) for(auto &i : v) cin >> i
#define vl vector<long long>
#define maxheap priority_queue<ll>
#define minheap priority_queue<ll, vector<ll>, greater<ll>>
#define eline cout << "\n"

void solve() {
    ll n, d;
    cin >> n >> d;
    vl arr(n);
    civ(arr);

    map<ll, ll> mp;
    maxheap maxh;
    minheap minh;

    for (auto val : arr) {
        mp[val]++;
        maxh.push(val);
        minh.push(val);
    }

    /*
      ans ct 
      0   6
      0   5
    */
    ll ans = 0, ct = n;
    while (ct > 0) {
        if (maxh.empty()) break;

        int curr = maxh.top();
        maxh.pop();

        if (mp[curr] <= 0) continue;

        mp[curr]--;
        if(mp[curr] == 0)
           mp.erase(curr);
        ct--;

        if (curr > d) {
            ans++;
        } else {
            ll req = ceil((double)((double)d / (double)curr))-1;
            if((req+1)*curr <= d)
                req++;
            if (req <= ct) {
                while (req && !minh.empty()) {
                    ll tp = minh.top();
                    minh.pop();
                    if (mp[tp] > 0) {
                        mp[tp]--;
                        if(mp[tp] == 0)
                          mp.erase(tp);
                        ct--;
                        req--;
                    }
                }
                ans++;
            }else{
              break;
            } 
        }
    }
    cout << ans;
    eline;
}

int main() {
    ll t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
