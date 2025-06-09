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
    ll n,x,y;
    cin>>n>>x>>y;


    /*
    1 2
    7 2 3
    2 4 6
    3 6 
    */
    ll sum = 0;
    ll lcm = x*y/(__gcd(x,y));
    ll xFact = floor((double)n / (double)x);
    ll yFact = floor((double)n / (double)y);
    ll xyFact = floor((double)n / (double)(lcm));

    xFact = max(xFact - xyFact, 0LL);
    yFact = max(yFact - xyFact, 0LL);

    xFact = n - xFact;
    ll totSum = (n * (n + 1)) / 2;

    sum += totSum - ((xFact * (xFact + 1)) / 2);
    sum -= ((yFact * (yFact + 1)) / 2);
    // ll mul = 2;
    // // usll st;

    // ll curX=x,curY=y;
    // ll maxNo = n,minmNo = 1;

    // while(curX <= n){
    //     if(curX%y == 0){
    //         curX = x * mul;
    //         mul++;
    //     }
    //     else{
    //         sum += maxNo;
    //         maxNo--;
    //         curX = x * mul;
    //         mul++;
    //     }
    // }

    // mul = 2;
    // while(curY <= n){
    //     if(curY%x == 0){
    //         curY = y * mul;
    //         mul++;
    //     }
    //     else{
    //         sum -= minmNo;
    //         minmNo++;
    //         curY = y* mul;
    //         mul++;
    //     }
    // }
    
    cout<<sum;
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