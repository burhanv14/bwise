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
    ll n;
    string s;
    cin>>n;
    vl a(n);
    civ(a);
    cin>>s;
    
    ll q;
    cin>>q;
    
    vl pref(n+1);
    pref[0] = 0;
    ll xor0=0,xor1 = 0;
    forn(0,n){
      if(s[i] == '0'){
        xor0 = xor0^a[i];
      }else{
        xor1 = xor1^a[i];
      }
      pref[i+1] = pref[i]^a[i];
    }

    while(q--){
        ll type;
        cin>>type;

        if(type == 2){
          ll num;
          cin>>num;
          if(num == 1) cout<<xor1<<" ";
          else    cout<<xor0<<" ";
        }else{
          ll l,r;
          cin>>l>>r;

          ll xr = pref[r]^pref[l-1];
          xor0 = xor0^xr;
          xor1 = xor1^xr;
        }
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