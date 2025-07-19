//Code by Burhan Vora - 22ucc123@lnmiit.ac.in
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
//st.find_by_order(x) || st.order_of_key(x)
typedef                   tree<long long,null_type,less<long long>,rb_tree_tag,tree_order_statistics_node_update> pbds;
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

ll mod = 998244353;

ll getWays(ll n){
    ll prod = 1;
    for(ll i = 2;i<=n;i++){
        prod = (prod*i)%mod;
    }
    return prod;
}

void solve(){
        string str;
        cin >> str;
        ll seg = 1; 
        ll n = str.length();
        ll len = 1;
        ll op = 0;
        for (ll i = 0; i + 1 < n; i++) {
            if(str[i] != str[i + 1]) {
                seg = (seg % mod * len % mod) % mod;
                op += len - 1;
                len = 1;
            } else {
                len++;
            }
        }
        if(len > 1) {
                seg = (seg % mod * len % mod) % mod;
            op += len - 1;
        }
        if(op == 0) {
            cout << "0 1" << '\n';
            return;
        }

        for (ll i = 1; i <= op; i++) {
            seg = (seg % mod * i % mod) % mod;
        }
        cout << op << ' ' << seg << '\n';
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