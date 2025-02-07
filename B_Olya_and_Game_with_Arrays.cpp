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
#define eline cout<<endl
#define coutvec(arr) for(auto i=0;i<arr.size();i++) cout<<arr[i]<<" "
#define maxheap priority_queue <int> 
#define minheap priority_queue <int,vector<int>,greater<int>>
#define ppi pair<int,pair<int,int>>
#define pii pair<int,int>
#define pb emplace_back
#define all(x) x.begin(),x.end()

ll findSecMin(vi arr)
{
    int x = INT_MAX;
    int y = INT_MAX;

    for(int i=0;i<arr.size();i++)
    {
      if(arr[i] < x)
      {
        y = x;
        x = arr[i];
      }
      else if(arr[i] < y)
      {
        y = arr[i];
      }
    }
    return y;
}

void solve()
{
    ll n;
    cin>>n;
    vector <vector<int>> arr(n);
    forn(0,n)
    {
        ll m;
        cin>>m;
        arr[i] = vector <int>(m);
        for(ll j=0;j<m;j++)
        {
          cin>>arr[i][j];
        }
    }
    int minm = INT_MAX;
    ll ans = 0;
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<arr[i].size();j++)
      {
        if(arr[i][j] < minm)
          minm = arr[i][j];
      }
    }
    ans += minm;
    minm = INT_MAX;
    for(int i=0;i<n;i++)
    {
       ll curr = findSecMin(arr[i]);
       ans += curr;
       if(curr < minm)
          minm = curr;
    }
    ans = ans - minm;
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