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

void solve()
{
  /*
    f(a) + f(b) --> max
    a + b = s

    1 2 3 4 5 6 6 7 8 9
    1 2 3 4 5 5 6 7 8 9
  */
  ll n;
  cin>>n;
  string s;
  cin>>s;
  vl pref(n,0);
  vl suff(n,0);
  unordered_set <char> st;

  pref[0] = 1;
  st.insert(s[0]);
  forn(1,n){
    if(st.find(s[i]) == st.end())
      pref[i] = pref[i-1] + 1;
    else
      pref[i] = pref[i-1];
    st.insert(s[i]);
  }

  st.clear();
  suff[n-1] = 1;
  st.insert(s[n-1]);
  for(int i=n-2;i>=0;i--){
    if(st.find(s[i]) == st.end())
      suff[i] = suff[i+1] + 1;
    else
      suff[i] = suff[i+1];
  st.insert(s[i]);
  }

  int ans = 0;
  forn(0,n-1){
    ans = max((double)ans,(double)(suff[i+1]+pref[i]));
  }
  ans= max((double)ans,(double)pref[n-1]);
  cout<<ans<<endl;
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