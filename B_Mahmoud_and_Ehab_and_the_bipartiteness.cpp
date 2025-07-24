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

bool colorGraph(int node,int col,vi &color,vector<vi>&adj){
    color[node] = 1-col;

    for(auto it : adj[node]){
        if(color[it] != -1){
            if(color[it] == color[node])    
                return false;
        }else if(!colorGraph(it,1-col,color,adj)){
            return false;
        }
    }

    return true;
}

void solve(){
    int n;
    cin>>n;
    vector <pair<int,int>> edges;
    forn(0,n-1){
        int u,v;
        cin>>u>>v;
        edges.push_back({u,v});
    }

    vector <vector<int>> adj(n+1);

    for(auto it : edges){
        adj[it.first].push_back(it.second);
        adj[it.second].push_back(it.first);
    }

    vector <int> color(n+1,-1);
    bool f = colorGraph(1,1,color,adj);

    if(f == false){
        cout<<0<<endl;
        return;
    }

    vector <int> a,b;
    forn(1,n+1){
        if(color[i] == 1)   a.pb(i);
        else                b.pb(i);
    }

    int ans = 0;

    if(b.size() < a.size()){
        for(auto it : b){
            if(a.size() - adj[it].size() > 0)
            ans += a.size() - adj[it].size();        
        }
    }else{
        for(auto it : a){
            if(b.size() - adj[it].size() > 0)
            ans += b.size() - adj[it].size();        
        }
    }

    cout<<ans;
    eline;
}

signed main()
{
  //fast;
  int t = 1;
//   cin>>t;
  while(t--){
    solve();
  }
   return 0;
}