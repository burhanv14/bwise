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
#define pii pair<int,int>
#define pb emplace_back
#define all(x) x.begin(),x.end()

ll water(ll h, vl& arr, ll sum, ll maxm) {
    ll n = arr.size();
    if (h > maxm) {
        return (n * h) - sum;
    }
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += max(0LL, h - arr[i]);
    }
    return ans;
}

void solve() {
    ll n, x;
    cin >> n >> x;
    vl arr(n);
    civ(arr);
    ll sum = accumulate(arr.begin(), arr.end(), 0LL);
    ll maxm = *max_element(all(arr));
    ll low = *min_element(arr.begin(), arr.end());
    
    ll high = (x + sum + n - 1) / n; 
    while (low <= high) {
        ll mid = low + (high - low) / 2;
        if (water(mid, arr, sum, maxm) <= x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    
    cout << low-1 << "\n";
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