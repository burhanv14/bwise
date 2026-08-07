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


const ll mod = 1e9 + 7;
const ll MAXN = 4e4 + 5;

vl dp(MAXN + 1, 0);
vl palis;

bool isPalindrome(int x) {
    string s = to_string(x);
    int l = 0, r = s.size() - 1;
    while (l < r) {
        if (s[l++] != s[r--]) return false;
    }
    return true;
}

void checkPalis() {
    for (int i = 1; i <= MAXN; i++) {
        if (isPalindrome(i)) {
            palis.push_back(i);
        }
    }

    dp[0] = 1;

    for(ll p : palis){
        forn(1,MAXN+1){
            if(i - p >= 0){
                dp[i] += (dp[i - p])%mod;
            }
        }
    }
}

void solve() {
    ll n;
    cin>>n;
    cout<<dp[n]%mod;
    eline;
}


int main()
{
  //fast;
  int t = 1;
  cin>>t;
  checkPalis();
  while(t--){
    solve();
  }
   return 0;
}