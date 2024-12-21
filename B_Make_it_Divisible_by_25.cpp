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
  string s;
  cin>>s;
  ll n = s.length();
  int count = 0;
  int ans = INT_MAX;
  ll rp = 0;
  for(ll i = n-1;i>=0;i--)
  {
    
    if(rp == 2)
      break;
    
    if(s[i] == '0')
      rp++;
    else
      count++;
  }
  if(rp == 2)
    ans = min(ans,count);
  count = 0;
  rp = 0;
    for(ll i = n-1;i>=0;i--)
  {
    
    if(rp == 2)
      break;
    if(s[i] == '0' && rp == 0)
      rp++;
    else if(s[i] == '5' && rp==1)
      rp++; 
    else
      count++;
  }
    if(rp == 2)
  ans = min(ans,count);
  count = 0;
  rp = 0;
    for(ll i = n-1;i>=0;i--)
  {
    
    if(rp == 2)
      break;
    if(s[i] == '5' && rp == 0)
      rp++;
    else if(s[i] == '7' && rp==1)
      rp++; 
    else
      count++;
  }
    if(rp == 2)
  ans = min(ans,count);
count = 0;
  rp = 0;
    for(ll i = n-1;i>=0;i--)
  {
    
    if(rp == 2)
      break;
    if(s[i] == '5' && rp == 0)
      rp++;
    else if(s[i] == '2' && rp==1)
      rp++; 
    else
      count++;
  }
    if(rp == 2)
  ans = min(ans,count);
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