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

int main()
{
   //fast;
   int t = 1;
   cin>>t;
   while(t--){
    ll n;
    cin >> n;

    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    ll xOR = 0;
    for (int i = 0; i < n; i++)
        xOR = (arr[i] ^ xOR);

    if (xOR == 0)
        cout << 0;
    else if (n & 1)
        cout << xOR;
    else
        cout << -1;

    eline;
   }
    return 0;
}