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

bool myBsearch(vector <int> arr,int lKey, int rKey){
  if(arr.size() == 0) return false;
  int n = arr.size();
  int low = 0,high = n-1;
  
  while(low <= high){
    int mid = (low+high)/2;

    if(arr[mid] >= lKey && arr[mid] <rKey){
        return true;
    }else if(arr[mid] < lKey){
      low = mid + 1;
    }else{
      high = mid -1;
    }
  }

  return false;
}

void solve(){
    // 1 2 3 4
    
    // 1 --> 2
    // 2 --> 3,1
    // 3 --> 2

    int n,m;
    cin>>n>>m;
    vector <vi> a(m,vi(2));
    for(int i=0;i<m;i++){
      cin>>a[i][0]>>a[i][1];
    }
    

    map <int,vector<int>> mp;
    for(int i=0;i<m;i++){
        mp[a[i][0]].pb(a[i][1]);
        mp[a[i][1]].pb(a[i][0]);
    }

    for(auto & it : mp){
      sort(it.second.begin(),it.second.end());
    }

    ll ans = 0;
    int lp = 1;
    for(int rp=1;rp<=n;rp++){
      for(auto it : mp[rp]){
        if(it < rp){
          lp = max(lp, it + 1);
        }
      }
      ans += rp-lp+1;
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