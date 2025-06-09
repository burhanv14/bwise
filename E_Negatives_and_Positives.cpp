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

void solve(){
  ll n;
  cin>>n;
  vl a(n);
  civ(a);

  ll i =0;
  bool f = false;
  ll sum = 0;
  forn(0,n){
    sum += abs(a[i]);
    if(a[i] == 0)
      f  = true;
  }

  if(f)
  {
    cout<<sum;
    eline;
    return;
  }
  // while(i<n){
  //   if(a[i] >= 0)
  //     i++;
  //   else{
  //     ll minm = abs(a[i]),minmInd = i;
  //     ll ind = i;
  //     ll ct = 0;  
  //     while(i<n && a[i] < 0){
  //       if(abs(a[i]) < minm){
  //         minm = abs(a[i]);
  //         minmInd = i;
  //       }
  //       ct++;
  //       i++;
  //     }
  //     if(ct&1){ 
  //       if(ind-1>=0){
  //         if(abs(a[ind-1]) < minm){
  //           minm = abs(a[ind-1]);
  //           minmInd = ind-1;
  //         }
  //       }
  //         for(ll j = max(ind-1,0LL);j<=(min(i,n-1));j++){
  //           if(j == minmInd)
  //             a[j] = -1*(abs(a[j]));
  //           else  
  //             a[j] = abs(a[j]);
  //         }
  //     }
  //     else{
  //       for(ll j = ind;j<=(min(i,n-1));j++){
  //             a[j] = abs(a[j]);
  //         }
  //     }
  //   }
  // }
  ll minm = abs(a[0]),minmInd = 0;
  ll ct = 0;
  forn(0,n){
    if(a[i] < 0)
      ct++;
    if(abs(a[i]) < minm){
      minm = abs(a[i]);
      minmInd = i;
    }
  }
  if(ct&1){
    sum = 0;
    forn(0,n){
      if(i == minmInd)
        sum -= abs(a[i]);
      else
        sum += abs(a[i]);
    }
  }
    cout<<sum;
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