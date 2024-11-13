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

void solve()
{
     ll n;
     cin>>n;
     vi v(n);
     civ(v);
     if(n==1)
     {
          cout<<"0";
          eline; return;
     }
     int mx=INT_MIN;
     for(int i=1; i<n; ++i)
          mx = max(mx, v[i-1]-v[i]);
     for(int i=1; i<n; ++i)
          mx = max(mx, v[i]-v[0]);
     for(int i=0; i<n-1; ++i)
          mx= max(mx, v[n-1]-v[i]);
     cout<<mx;
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