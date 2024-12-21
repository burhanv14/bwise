//Code by Burhanuddin Vora - 22ucc123@lnmiit.ac.in
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
    vl arr(3);
    civ(arr);
    ll a = arr[0];
    ll b = arr[1];
    ll c = arr[2];

    if(a+c == 2*b)
    {
        yes;
        return;
    }
    if(((2 * b - c)/a)>0 && (2*b-c)%a==0)
        yes;
    else if(((2 * b - a)/c)>0 && (2*b-a)%c==0)
        yes;
    else if(((a+c)/2*b)>0 && (a+c)%(2*b)==0)
        yes;
    else
        no;
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