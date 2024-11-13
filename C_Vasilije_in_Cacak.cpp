//Code by Burhanuddin Vora
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define civ(v) for(auto i=0;i<v.size();i++) cin>>v[i]
#define vi vector<int>
#define forn(s,n) for(auto i=s;i<n;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define con continue
#define eline cout<<endl
#define coutvec(arr,j,n) for(int i=j;i<n;i++) cout<<arr[i]<<" "
#define int long long

signed main()
{
   //fast;
   int t = 1;
   cin>>t;
   while(t--){
    int n,k,x;
    cin>>n>>k>>x;
    int m1 = k*(k+1)/2;
    int m2 = ((n*(n+1))/2) - (((n-k)*(n-k+1))/2);
    if(x>=m1 && x<=m2)
        yes;
    else
        no;
   }
    return 0;
}