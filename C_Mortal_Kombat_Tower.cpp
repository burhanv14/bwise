//Code by Burhanuddin Vora - burhanuddin.vora@gmail.com
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


int fn(int ind,int chance,vi &a){
  if(ind >= a.size())  return 0;

  int ans = INT_MAX;
  if(chance == 0){
    ans = min(fn(ind+2,1,a),fn(ind+1,1,a));
  }else{
    ans = a[ind] + fn(ind+1,0,a);
    if(ind+1 < a.size())  ans = min(ans, a[ind] + a[ind+1] + fn(ind+2,0,a));
  }

  return ans;
}
void solve(){
  int n;
  cin>>n;
  vi a(n);
  civ(a);

  vector <vector<int>> dp(n+2,vector<int>(2,0));
  for(int ind = n-1;ind>=0;ind--){
    for(int chance = 0;chance<=1;chance++){
      int ans = INT_MAX;
      if(chance == 0){
        ans = min(dp[ind+2][1],dp[ind+1][1]);
      }else{
        ans = a[ind] + dp[ind+1][0];
        if(ind+1 < a.size())  ans = min(ans, a[ind] + a[ind+1] + dp[ind+2][0]);
      }
      dp[ind][chance] = ans;
    }
  }

  cout<<dp[0][1];
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