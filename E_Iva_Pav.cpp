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


bool check(int left,int right,vector <vi>&bits,int k){
  int num = 0;
  for(int i=0;i<=31;i++){
    int diff = bits[right][i] - bits[left-1][i];
    int cur_len = right - left +1 ;
    if(diff == cur_len){
      num |= (1<<i);
    }
  }
  return num>=k;
}
void solve(){
    int n;
    cin>>n;
    vi a(n);
    civ(a);
    int q;
    cin>>q;
    vector <pii> que(q);
    forn(0,q){
      cin>>que[i].first>>que[i].second;
    }

    vector <vector<int>> bits(n+1,vector<int>(32,0));
    
    for(int i=1;i<=n;i++){
      int ind = i-1;
      for(int j=0;j<=31;j++){
        bits[i][j] = bits[i-1][j] + ((a[ind] >> j) & 1);
      }
    }

    for(auto &it : que){
      int l = it.first;
      int r = -1;
      int k = it.second;

      int low = l,high = n;
      while(low <= high){
        int mid = (low + high)/2;

        if(check(l,mid,bits,k)){
            r = mid;
            low = mid + 1;
        }else{
          high = mid - 1;
        }
      }

      cout<<r<<" ";
    }
    
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