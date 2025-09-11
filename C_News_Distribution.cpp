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


class DisjointSet{
    public:
    vector <int> sizes,parent;
         DisjointSet(int n){
            sizes.resize(n+1,1);
            parent.resize(n+1);;
            for(int i=0;i<=n;i++){
                parent[i] = i;
            }
        }

        int findUlp(int node){
            if(node == parent[node])    return node;
            return parent[node] = findUlp(parent[node]);
        }

        void unionSize(int u,int v){
            int pu = findUlp(u);
            int pv = findUlp(v);
            if(pu == pv)    return;
            int su = sizes[pu];
            int sv = sizes[pv];

            if(su < sv){
                parent[pu] = pv;
                sizes[pv] += sizes[pu]; 
            }else{
                parent[pv] = pu;
                sizes[pu] += sizes[pv];
            }
        }
};

void solve(){
    int n,m;
    cin>>n>>m;
    vector <vi> a;
    DisjointSet st(n);
    forn(0,m){
        int k;
        cin>>k;
        if(k <= 0)  continue;
        vi temp(k);
        civ(temp);
        a.pb(temp);
    } 

    for(auto it : a){
        int s = it.size();
        for(int i=1;i<s;i++){
            st.unionSize(it[i],it[i-1]);
        }
    }

    for(int i=1;i<=n;i++){
        cout<<st.sizes[st.findUlp(i)]<<" ";
    }

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