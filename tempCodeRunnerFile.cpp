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

ll dfs(ll node,ll curr_m,vector <vl> &adj,vl &a,ll &m){
    if(curr_m > m){
        return 0;
    }

    if(adj[node].size() == 0){
        if(curr_m + a[node] <= m)
            return 1;
    }

    ll ans=0;
    ll new_m = a[node-1]==1?curr_m+1:0;
    for(auto it : adj[node]){
        ans += dfs(it,new_m,adj,a,m);
    }

    return ans;
}

void solve(){
    ll n,m;
    cin>>n>>m;

    vl a(n);
    civ(a);

    vector <vl> adj(n+1);
    forn(0,n-1){
        ll u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }

    cout<<dfs(1,0,adj,a,m);
    eline;
}

int main()
{
  //fast;
  int t = 1;
//   cin>>t;
  while(t--){
    solve();
  }
   return 0;
}