//Code by Burhan Vora - 22ucc123@lnmiit.ac.in
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
//st.find_by_order(x) || st.order_of_key(x)
typedef tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> pbds;
#define fast              ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll                long long
#define civ(v)            for(auto i=0;i<v.size();i++) cin>>v[i]
#define vi                vector<int>
#define vl                vector<long long>
#define usi               unordered_set <int>
#define usll              unordered_set <long long>
#define si                set<int>
#define sll               set<long long>
#define umii              unordered_map <int,int>
#define mii               map<int,int>
#define umll              unordered_map <long long,long long>
#define mll               map<long long,long long>
#define forn(s,n)         for(auto i=s;i<n;i++)
#define yes               cout<<"YES"<<endl
#define no                cout<<"NO"<<endl
#define con               continue
#define eline             cout<<"\n"
#define coutvec(arr)      for(auto i=0;i<arr.size();i++) cout<<arr[i]<<" "
#define maxheap           priority_queue <int> 
#define minheap           priority_queue <int,vector<int>,greater<int>>
#define ppi               pair<int,pair<int,int>>
#define pll               pair<long long,long long>
#define pii               pair<int,int>
#define pb                emplace_back
#define all(x)            x.begin(),x.end()

void solve() {
    ll n, totalDiv;
    cin >> n >> totalDiv;

    ll root = -1;
    ll baseSum, remDiv;
    for (ll r = 1; r <= n; ++r) {
        baseSum = r * (r + 1) / 2;
        if (baseSum > totalDiv) break;
        remDiv = totalDiv - baseSum;
        ll leaves = n - r;
        if (leaves <= remDiv && remDiv <= leaves * r) {
            root = r;
            goto result;
        }
    }

    cout << "-1\n";
    return;

result:
    vector<pii> tree;
    for (ll curr = root; curr > 1; --curr) {
        tree.pb(curr, curr - 1);
    }

    ll leaves = n - root;
    ll excess = remDiv - leaves;
    for (ll curr = root + 1; curr <= n; ++curr) {
        ll extra = min(excess, root - 1);
        excess -= extra;
        ll parent = 1 + extra;
        tree.pb(parent, curr);
    }

    cout << root << "\n";
    for (auto &edge : tree) {
        cout << edge.first << " " << edge.second << "\n";
    }
}

int main() {
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
