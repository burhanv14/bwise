//Code by Burhan Vora - 22ucc123@lnmiit.ac.in
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<long long,null_type,less<long long>,rb_tree_tag,tree_order_statistics_node_update> pbds;
//st.find_by_order(x) || st.order_of_key(x)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define civ(v) for(auto i=0;i<v.size();i++) cin>>v[i]
#define vi vector<int>
#define vl vector<long long>
#define usi unordered_set <int>
#define usll unordered_set <long long>
#define si set<int>
#define sll set<long long>
#define umii unordered_map <int,int>
#define mii map<int,int>
#define umll unordered_map <long long,long long>
#define mll map<long long,long long>
#define forn(s,n) for(auto i=s;i<n;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define con continue
#define eline cout<<"\n"
#define coutvec(arr) for(auto i=0;i<arr.size();i++) cout<<arr[i]<<" "
#define maxheap priority_queue <int> 
#define minheap priority_queue <int,vector<int>,greater<int>>
#define ppi pair<int,pair<int,int>>
#define pll pair<long long,long long>
#define pii pair<int,int>
#define pb emplace_back
#define all(x) x.begin(),x.end()

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll tot = a[0];
    for (int i = 1; i < n; i++) {
        tot = __gcd(tot, a[i]);
    }

    ll count_eq = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == tot) {
            count_eq++;
        }
    }
    if (count_eq > 0) {
        cout << (n - count_eq) << "\n";
        return;
    }

    int min_len = INT_MAX;
    for (int i = 0; i < n; i++) {
        ll running_gcd = a[i];
        if (running_gcd == tot) {
            min_len = 1;
            break;
        }
        for (int j = i + 1; j < n; j++) {
            running_gcd = __gcd(running_gcd, a[j]);
            if (running_gcd == tot) {
                min_len = min(min_len, j - i + 1);
                break;
            }
        }
    }

    if (min_len == INT_MAX) {
        cout << "-1\n";
        return;
    }

    ll answer = (ll)(min_len - 1) + (ll)(n - 1);
    cout << answer << "\n";
}


int main()
{
  //fast;
  int t = 1;
  cin>>t;
  while(t--){
    solve();
  }
   return 0;
}