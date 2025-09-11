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

void solve() {
    long long n,x,y;
    cin >> n >> x >> y;
    vl a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int numOdds = 0;
    for(int i = 0; i < n; i++) { //O(n)
        if(a[i] % 2 == 1) {
            numOdds++;
        }
    }
 
    int aliceStart, bobStart;
    aliceStart = x % 2;
    bobStart = 1 - aliceStart;
 
    int aliceEnd, bobEnd;
 
    if(numOdds % 2 == 0) {
        aliceEnd = aliceStart;
        bobEnd = bobStart;
    }
    else{
        aliceEnd = 1 - aliceStart;
        bobEnd = 1 - bobStart;
    }
 
    if(y % 2 == aliceEnd) {
        cout << "Alice\n";
    }
    else{
        cout << "Bob\n";
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