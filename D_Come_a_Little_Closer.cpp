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

// void get_max(vl& nums, ll& max1, ll& max2) {
//     max1 = max2 = INT_MIN;

//     for (ll num : nums) {
//         if (num > max1) {
//             max2 = max1;
//             max1 = num;
//         } else if (num > max2 && num != max1) {
//             max2 = num;
//         }
//     }

// }
// void get_min(vector<ll>& nums, ll& min1, ll& min2) {
//     min1 = min2 = INT_MIN;

//     for (ll num : nums) {
//         if (num < min1) {
//             min2 = min1;
//             min1 = num;
//         } else if (num < min2 && num != min1) {
//             min2 = num;
//         }
//     }

// }
void solve(){
        ll n;
        cin >> n;
        vector<ll> xs(n), ys(n);
        for (int i = 0; i < n; i++) {
            cin >> xs[i] >> ys[i];
        }
        if (n == 1) {
            cout << 1 << '\n';
            return;
        }
        
        vector<ll> sx = xs, sy = ys;
        sort(sx.begin(), sx.end());
        sort(sy.begin(), sy.end());
        
        ll min_x = sx.front(), max_x = sx.back();
        ll min_y = sy.front(), max_y = sy.back();
        ll cnt_min_x = count(sx.begin(), sx.end(), min_x);
        ll cnt_max_x = count(sx.begin(), sx.end(), max_x);
        ll cnt_min_y = count(sy.begin(), sy.end(), min_y);
        ll cnt_max_y = count(sy.begin(), sy.end(), max_y);
        
        ll second_min_x = sx[cnt_min_x];
        ll second_max_x = sx[sx.size() - 1 - cnt_max_x];
        ll second_min_y = sy[cnt_min_y];
        ll second_max_y = sy[sy.size() - 1 - cnt_max_y];
        
        ll ans = LLONG_MAX;
        for (int i = 0; i < n; i++) {
            ll cur_min_x = min_x;
            ll cur_max_x = max_x;
            if (xs[i] == min_x && cnt_min_x == 1) cur_min_x = second_min_x;
            if (xs[i] == max_x && cnt_max_x == 1) cur_max_x = second_max_x;
            ll cur_min_y = min_y;
            ll cur_max_y = max_y;
            if (ys[i] == min_y && cnt_min_y == 1) cur_min_y = second_min_y;
            if (ys[i] == max_y && cnt_max_y == 1) cur_max_y = second_max_y;

            ll w = cur_max_x - cur_min_x + 1;
            ll h = cur_max_y - cur_min_y + 1;
            ll area = w * h;
            if (area > n - 1) {
                ans = min(ans, area);
            } else {
                ll cost1 = (w + 1) * h;
                ll cost2 = w * (h + 1);
                ans = min({ans, cost1, cost2});
            }
        }
        cout<<ans;
        eline;
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