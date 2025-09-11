// Code by Burhan Vora - 22ucc123@lnmiit.ac.in
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> pbds;
#define fast              ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll                long long
#define civ(v)            for(auto i=0; i<v.size(); i++) cin>>v[i]
#define vi                vector<int>
#define vl                vector<long long>
#define usi               unordered_set<int>
#define usll              unordered_set<long long>
#define si                set<int>
#define sll               set<long long>
#define umii              unordered_map<int,int>
#define mii               map<int,int>
#define umll              unordered_map<long long,long long>
#define mll               map<long long,long long>
#define forn(s,n)         for(auto i=s; i<n; i++)
#define yes               cout<<"YES\n"
#define no                cout<<"NO\n"
#define eline             cout<<"\n"
#define coutvec(arr)      for(auto i=0; i<arr.size(); i++) cout<<arr[i]<<" "
#define maxheap           priority_queue<int>
#define minheap           priority_queue<int, vector<int>, greater<int>>
#define ppi               pair<int, pair<int,int>>
#define pll               pair<long long,long long>
#define pii               pair<int,int>
#define pb                emplace_back
#define all(x)            x.begin(), x.end()

void solve() {
    ll n,m; cin >> n >> m;
    ll n0 = n;
    int cnt2 = 0, cnt5 = 0;
    ll k = 1;
    while (n > 0 && n % 2 == 0) {
        n /= 2;
        cnt2++;
    }
    while (n > 0 && n % 5 == 0) {
        n /= 5;
        cnt5++;
    }
    while (cnt2 < cnt5 && k * 2 <= m) {
        cnt2++;
        k *= 2;
    }
    while (cnt5 < cnt2 && k * 5 <= m) {
        cnt5++;
        k *= 5;
    }
    while (k * 10 <= m) {
        k *= 10;
    }
    if (k == 1) {
        cout << n0 * m << endl;
    } else {
        k *= m / k;
        cout << n0 * k << endl;
    }
}

int main(){
    fast;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
