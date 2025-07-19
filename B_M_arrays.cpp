//Code by Burhan Vora - 22ucc123@lnmiit.ac.in
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<long long,null_type,less<long long>,rb_tree_tag,tree_order_statistics_node_update> pbds;
#define fast              ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll                long long
#define civ(v)            for(auto i=0;i<v.size();i++) cin>>v[i]
#define vi                vector<int>
#define vl                vector<long long>
#define umii              unordered_map <int,int>
#define mii               map<int,int>
#define forn(s,n)         for(auto i=s;i<n;i++)
#define eline             cout<<"\n"

void solve(){
    int n, m;
    cin >> n >> m;
    vi a(n);
    civ(a);

    mii freq;
    for (auto x : a)
        freq[x % m]++;

    int groups = 0;

    if(freq[0]) groups++, freq[0] = 0;

    for(int r = 1; r <= m / 2; r++) {
        if (freq[r] == 0 && freq[m - r] == 0) continue;
        if (r == m - r) {
            groups += 1;
            freq[r] = 0;
        } else {
            int x = freq[r], y = freq[m - r];
            int mn = min(x, y);
            int rem = abs(x - y);
            groups++; 
            if (rem > 0) groups += rem - 1;
            freq[r] = freq[m - r] = 0;
        }
    }

    cout<<groups;
    eline;
}

int main(){
    fast;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
