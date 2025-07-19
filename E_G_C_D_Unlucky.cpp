//Code by Burhan Vora - 22ucc123@lnmiit.ac.in
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
//st.find_by_order(x) || st.order_of_key(x)
typedef tree<long long,null_type,less<long long>,rb_tree_tag,tree_order_statistics_node_update> pbds;
#define fast              ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll                long long
#define civ(v)            for(auto i=0;i<v.size();i++) cin>>v[i]
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
#define forn(s,n)         for(int i=s;i<n;i++)
#define yes               cout<<"YES\n"
#define no                cout<<"NO\n"
#define con               continue
#define eline             cout<<"\n"
#define coutvec(arr)      for(auto i=0;i<arr.size();i++) cout<<arr[i]<<" ";
#define maxheap           priority_queue<int>
#define minheap           priority_queue<int,vector<int>,greater<int>>
#define ppi               pair<int,pair<int,int>>
#define pll               pair<long long,long long>
#define pii               pair<int,int>
#define pb                emplace_back
#define all(x)            x.begin(),x.end()

ll mygcd(ll a, ll b) {
    return b ? mygcd(b, a % b) : a;
}

ll mylcm(ll a, ll b) {
    if (a == 0 || b == 0) return 0;
    ll g = mygcd(a, b);
    return (a / g) * b;
}

void solve() {
    int n;
    cin >> n;
    vl p(n), s(n);
    civ(p);
    civ(s);

    
    for (int i = 1; i < n; i++) {
        if (p[i-1] % p[i] != 0) {
            goto displayAns;
        }
    }
    for (int i = 0; i + 1 < n; i++) {
        if (s[i+1] % s[i] != 0) {
            goto displayAns;
        }
    }
    if (p[n-1] != s[0]){
      goto displayAns;
    }

      for (int i = 0; i < n; i++) {
          ll cur_lcm = mylcm(p[i], s[i]);
          if (i > 0 && mygcd(p[i-1], cur_lcm) != p[i]) {
              goto displayAns;
          }
          if (i + 1 < n && mygcd(cur_lcm, s[i+1]) != s[i]) {
            goto displayAns;
          }
      }


  yes;
  return;
  
  displayAns:
    no;
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