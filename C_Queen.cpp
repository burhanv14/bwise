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

void solve(){
    int n;
    cin>>n;
    vi parent(n+1);
    vi res(n+1);

    forn(1,n+1){
        cin>>parent[i]>>res[i];
    }

    unordered_map <int,vi> mp;

    forn(1,n+1){
      if(parent[i]!=-1)
        mp[parent[i]].pb(i);
    }

    minheap pq;

    forn(1,n+1){
      if(parent[i]!=-1 && res[i]){
        bool f = true;
        for(auto it : mp[i]){
          if(res[it] == 0){
            f = false;
          }
        }
        if(f)   pq.push(i);
      }
    }


    if(pq.empty()){
      cout<<-1;
      eline;
      return;
    }

    while(!pq.empty()){
      cout<<pq.top()<<" ";
      pq.pop();
    }

    return;
  }

int main()
{
  //fast;
  int t = 1;
  // cin>>t;n
  while(t--){
    solve();
  }
   return 0;
}