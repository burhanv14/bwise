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
#define int               long long
void solve(){
    int n;
    cin >> n;
    vl a(n), b(n);
    civ(a);
    civ(b);

    vl dp1(n,0);
    vl dp2(n,0);
    int ans = max(a[0],b[0]);
    dp1[0] = a[0];
    dp2[0] = b[0];
  for(int i=1;i<n;i++){
    dp1[i] = dp2[i-1] + a[i];
    if(i-2 >= 0){
      dp1[i] = max(dp1[i], dp2[i-2] + a[i]);
    }

    dp2[i] = dp1[i-1] + b[i];
    if(i-2 >= 0){
      dp2[i] = max(dp2[i], dp1[i-2] + b[i]);
    }

    ans = max(ans, dp1[i]);
    ans = max(ans, dp2[i]);
  }

  cout<<ans;
  eline;
}

signed main()
{
  //fast;
  int t = 1;
  // cin>>t;
  while(t--){
    solve();
  }
   return 0;
}