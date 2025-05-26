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
#define pii pair<int,int>
#define pb emplace_back
#define all(x) x.begin(),x.end()

class powOf2{
    public : 
      umll mp;
      powOf2(){
        mp[0] = 1;
      }
      void fillMap()
      {
        ll prod = 1;
        for(int i=1;i<=30;i++)
        {
          prod *= 2;
          mp[i] = prod;
        }
      }
};


void solve(powOf2 &obj1)
{
  ll n,q;
  cin>>n>>q;
  vl arr(n);
  civ(arr);
  vl que(q);
  civ(que);


  ll prev = 31;
  for(int i=0;i<q;i++)
  {
    if(que[i] >= prev)
      continue;
    for(int j=0;j<n;j++)
    {
      if(arr[j]%obj1.mp[que[i]] == 0)
        arr[j] += obj1.mp[que[i]-1];
    }
    prev = que[i];
  }

  coutvec(arr);
  eline;
}

int main()
{
  //fast;
  int t = 1;
  cin>>t;
  powOf2 obj1;
  obj1.fillMap();
  while(t--){
    solve(obj1);
  }
   return 0;
}