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

bool check(ll maxJump1,vl &a,ll k){
    ll n = a.size();
    vl prevInd(k+1,-1);
    vl maxJump(k+1,INT_MIN);
    vector <bool> isRep(k+1,false);
    /*
    5
    -1 -1 -1
    min min min
    f f f
    */
    forn(0,n){
        ll jump = i-prevInd[a[i]]-1;
        if(jump > maxJump1){
            if(isRep[a[i]]){
                maxJump[a[i]] = INT_MAX;
            }else{
                if(jump/2 <= maxJump1){
                    isRep[a[i]] = true;
                    maxJump[a[i]] = max(maxJump[a[i]],jump/2);
                }else{
                    maxJump[a[i]] = INT_MAX;
                }
            }
        }
        else{
            maxJump[a[i]] = max(maxJump[a[i]],jump);
        }
        prevInd[a[i]] = i;
    }

    forn(1,k+1){
        ll jump = n-prevInd[i]-1;
        if(jump > maxJump1){
            if(isRep[i]){
                maxJump[i] = INT_MAX;
            }else{
                if(jump/2 <= maxJump1){
                    isRep[i] = true;
                    maxJump[i] = max(maxJump[i],jump/2);
                }else{
                    maxJump[i] = INT_MAX;
                }
            }
        }
        else{
            maxJump[i] = max(maxJump[i],jump);
        }
    }

    forn(1,k+1){
        if(maxJump[i] <= maxJump1)
            return true;
    }

    return false;
}

void solve(){
    ll n,k;
    cin>>n>>k;
    vl a(n);
    civ(a);

    ll low=0,high=n-1;
    ll ans = high;
    while(low <= high){
        ll mid = (low+high)/2;

        if(check(mid,a,k)){
            ans = min(ans, mid);
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
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