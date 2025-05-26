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


bool check(ll maxLen, ll rows, ll cols,ll ppl)
{
    // if(maxLen < 1 || maxLen > cols)
    //     return false;
    // if(maxLen == 1)
    //     return floor((double)cols/(double)2)*rows >= ppl;
 
    // int desks = 0;
    // int curr = 0;
    // for(int i=1;i<=cols;i++)
    // {
    //     curr++;
    //     if( (curr+1)%maxLen == 0)
    //     {
    //         curr = 1;
    //         continue;
    //     }
    //     desks++;;
    // }
    // return desks*rows>=ppl;

    ll eff = maxLen+1;
    ll desks = maxLen * (floor((double)cols/(double)eff));

    ll rem = cols%eff;
    desks += rem;

    return desks*rows >= ppl;
}
void solve()
{
    ll n,m,k;
    cin>>n>>m>>k;

    ll low = 1,high = m;
    ll ans = m;
    while(low <= high)
    {
        ll mid = (low+high)/2;

        if(check(mid,n,m,k))
        {
            ans = min(ans,mid);
            high = mid - 1;
        }
        else
            low = mid+1;
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