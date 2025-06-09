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

vi pow2 = {1};
const int mod = 998244353;

void solve(){
    int n;
    cin>>n;
    vi a(n);
    civ(a);
    vi b(n);
    civ(b);
    umii mp1; 
    umii mp2;

    forn(0,n){
        mp1[a[i]] = i;
        mp2[b[i]] = i;
    }
    if((int)pow2.size() <= n){
        int old = pow2.size();
        pow2.resize(n+1);
        for(int i=old;i<=n;i++){
            pow2[i] = (pow2[i-1]*2)%mod;
        }
    }

    int maxm1 =0,maxm2=0;
        forn(0,n){
        maxm1 = max(maxm1, a[i]);
        maxm2 = max(maxm2, b[i]);
 
        if(maxm1 > maxm2){
            int ind = mp1[maxm1];
            int ans = (pow2[maxm1] + pow2[b[i-ind]])%mod;
            cout<<(ans%mod)<<" ";
        }
        else if(maxm2 > maxm1){
            int ind = mp2[maxm2];
            int ans = (pow2[maxm2] + pow2[a[i-ind]])%mod;
            cout<<ans<<" ";
            // eline;
        }
        else{
            int ind1 = mp1[maxm1],ind2 = i-ind1; 
            int ans = (pow2[maxm1] + pow2[b[ind2]])%mod;    
            int ind3 = mp2[maxm2],ind4 = i-ind3;
            int ans2 = (pow2[maxm2] + pow2[a[ind4]])%mod;
            int q=max(b[ind2],a[ind4]);
            int fans = (pow2[maxm1] + pow2[q])%mod;
            cout<<fans<<" ";
        }
    }
        eline;
}

//0 1 2 3
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