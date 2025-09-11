// Code by Burhan Vora - 22ucc123@lnmiit.ac.in
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> pbds;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define vi vector<int>
#define all(x) x.begin(), x.end()

void solve() {
    vector<int> ans(4);
    for (int i = 0; i < 4; i++) {
        cout << "? " << 1 << " " << i + 2 << endl;
        cout.flush();
        cin >> ans[i]; 
    }

    vi poss = {4, 8, 15, 16, 23, 42};
    vi res(6);

    int g = ans[0];
    for(int i=1;i<4;i++){
      g = __gcd(g, ans[i]);
    }
    bool f = true;
    for(auto it : poss){
      if(g == it){
        f = false;
        break;
      }
    }

    int a1 = g;
    if(f) a1 /= 2;
    int a2 = ans[0] / a1;
    int a3 = ans[1] / a1;
    int a4 = ans[2] / a1;
    int a5 = ans[3] / a1;

    res = {a1, a2, a3, a4, a5};

    set<int> st(all(poss));
    for (int i = 0; i < 5; i++) st.erase(res[i]);
    res.push_back(*st.begin());

    cout << "! ";
    for (int x : res) cout << x << " ";
    cout << endl;
}

int main() {
    fast;
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
