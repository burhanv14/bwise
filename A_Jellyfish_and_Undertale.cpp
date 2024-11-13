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
#define ll long long

int main()
{
   //fast;
   int t = 1;
   cin>>t;
   while(t--){
        ll a,b,n;
        cin>>a>>b>>n;
        vector <long long> arr(n);
        civ(arr);
        sort(arr.begin(),arr.end(),greater <int>());
        ll ans = b;
        for(ll i=0;i<n;i++)
        {
          ans = ans + (a-1<arr[i]?a-1:arr[i]);
        }
        cout<<ans;
        eline;
   }
    return 0;
}