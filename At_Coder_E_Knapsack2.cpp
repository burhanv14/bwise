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


ll fn(int ind,int maxmVal,vi &val,vi &wt,vector<vl>&dp){
  if(ind > val.size()){
    return 0;
  }

  if(ind == val.size()){
    if(maxmVal == 0)
      return 0;
    return INT_MAX;
  }
  if(dp[ind][maxmVal] != -1){
    return dp[ind][maxmVal];
  }

  ll take = INT_MAX,notTake = INT_MAX;
  if(val[ind] <= maxmVal ){
      take = wt[ind] + fn(ind+1,maxmVal-val[ind],val,wt,dp);
  }
  notTake = fn(ind+1,maxmVal,val,wt,dp);

  return dp[ind][maxmVal] = min(take,notTake);
}
void solve(){
    int n,w;
    cin>>n>>w;

    vector <int> wt(n),val(n);
    forn(0,n){
      cin>>wt[i]>>val[i];
    }

    ll         maxmVal = accumulate(all(val),0);
    vector <vector<ll>> dp(n+1,vector<ll>(maxmVal+1,-1));

    /*
      for each val -> min wt. kitna ho sakta h
      ind,val

      if(cur.val < val)

    */
    int ans = 0;
    for(int i=maxmVal;i>=0;i--){
      ll minWt = fn(0,i,val,wt,dp);
      if(minWt <= w){
        ans = i;
        break;
      }
    }
    
    cout<<ans;
    eline;
}

int main()
{
  //fast;
  int t = 1;
  // cin>>t;
  while(t--){
    solve();
  }
   return 0;
}