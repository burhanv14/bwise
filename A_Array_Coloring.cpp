//Code by Burhanuddin Vora
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define civ(v) for(auto i=0;i<n;i++) cin>>v[i]
#define vi vector<int>
#define forn(s,n) for(auto i=s;i<n;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

int main()
{
   //fast;
   int t = 1;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    vi arr(n);
    civ(arr);
    ll sum = 0;
    forn(0,n){
        sum += arr[i];
    }    
    if(sum%2==0)
        yes;
    else
        no;
   }
    return 0;
}