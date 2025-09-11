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
    // split kaise karna h?
    // arr.back() >= incoming ele
    // if(incoming ele is greater)     usko sabse chote wale .back() mei daalenge
    // if(arr.empty)       usme daal do
    // if(both arr.back > icoming)     icoming ko chote arr.bvack mei daal do
    
    // 1 2 3 4 5
    // a -->1 3 5 
    // b -->2 4

    // 8 2 3 1 1 7 4 3
    // a-->8 3 3
    // b-->2 1 1 7 4 
    int n;
    cin >> n;
    vi arr(n);
    civ(arr);

    vi a, b;

    for (int i = 0; i < n; ++i) {
        int curr = arr[i];
        int l1,l2;
        if(a.empty())   l1 = INT_MAX;
        else            l1 = a.back();
        if(b.empty())   l2 = INT_MAX;
        else            l2 = b.back();
            if (l1 >= curr && l2 >= curr) {
                if (l1 < l2) a.pb(curr);
                else         b.pb(curr);
            } else if (l1 >= curr) {
                a.pb(curr);
            } else if (l2 >= curr) {
                b.pb(curr);
            } else {
                if (l1 < l2) a.pb(curr);
                else         b.pb(curr);
            }
    }

    int ans = 0;
    for (int i = 0; i + 1 < a.size(); ++i) {
        if (a[i] < a[i + 1]) ++ans;
    }

    for (int i = 0; i + 1 < b.size(); ++i) {
        if (b[i] < b[i + 1]) ++ans;
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