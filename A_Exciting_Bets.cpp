//Code by Burhan Vora - 22ucc123@lnmiit.ac.in
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> pbds;
//st.find_by_order(x) || st.order_by_key(x)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define civ(v) for(auto i=0;i<v.size();i++) cin>>v[i]
#define vi vector<int>
#define vl vector<long long>
#define forn(s,n) for(auto i=s;i<n;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define con continue
#define eline cout<<endl
#define coutvec(arr,j,n) for(int i=j;i<n;i++) cout<<arr[i]<<" "
#define inputn ll n;cin>>n;
#define maxheap priority_queue <int> 
#define minheap priority_queue <int,vector<int>,greater<int>>
#define ppi pair<int,pair<int,int>>
#define inNvec inputn;vl arr(n);civ(arr);

//gcd(a,b) == greatest common divisor of a and b
// greatest number that divides both a and b


void solve()
{
  ll a,b;
  cin>>a>>b;
  if(a == b)
  {
    cout<<"0 0";
    eline;
    return;
  }
  if(a > b)
    swap(a,b);
  ll ans = b-a;
  ll ans2 = min(ans - a%ans,a%ans);
  cout<<ans<<" "<<ans2;
  eline;
  return;
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