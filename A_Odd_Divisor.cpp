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

void solve()
{
  ll n;
        cin>>n;
        if(n & 1){
            yes;
        }
        else{
            bool ok = false;
            ll div = n;
            while(div > 2){
                div /= 2;
                if(div & 1){
                    if(n % div == 0){
                        ok = true;
                        break;
                    }
                }
            }
            if(ok){
                yes;
            }
            else{
                no;
            }
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