//Code by Burhan Vora - 22ucc123@lnmiit.ac.in
#include<bits/stdc++.h>
using namespace std;
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
  inNvec;
  ll sum = accumulate(arr.begin(),arr.end(),0);
  ll c1 = 0;
  ll c0 = 0;
  ll ans = 0;
  forn(0,n)
  {
    if(arr[i] == 1)
      c1++;
    if(arr[i] == 0)
      c0++;
  }
  ans = pow(2,c0) * c1;
  cout<<ans;
  eline;
  // 1 2 3 4 5 == 15 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14
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