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
    cin>>n;
    vl a(n);
    civ(a);

    if(n == 1)
    {
        cout<<0;
        eline;
        return;
    }

    if(a[n-2] > a[n-1]){
        cout<<-1<<endl;
        return;
    }

    ll minmDiff = a[n-2] - a[n-1];
    pll ind;
    if(abs(minmDiff) > 1e18){
        minmDiff = LLONG_MAX;
    }else{
        ind.first = n-2,ind.second = n-1;
    }

    ll i = 0;
    for(i=n-3;i>=0;i--){
        if(minmDiff <= a[i+1])
            break;
        if(a[i] <= a[i+1]){
            ll curr = a[i] - a[i+1];
            if(abs(curr) <= 1e18 && curr < minmDiff){
            minmDiff = min(minmDiff,curr);
            ind.first = i;
            ind.second = i+1;
        }
        }else{
            cout<<-1;
            eline;
            return;
        }
    }
    cout<<i+1;
    eline;
    while(i >= 0){
        cout<<i+1<<" "<<ind.first+1<<" "<<ind.second+1;
        eline;
        i--;
    }
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