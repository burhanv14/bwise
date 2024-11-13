//Code by Burhanuddin Vora
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

int main()
{
   //fast;
   int t = 1;
   cin>>t;
   while(t--){
    ll n,q;
    cin>>n>>q;
    vi arr(n);
    civ(arr);
    vector <ll> pref(n,0);
    vector <ll> suff(n,0);

    pref[0] = arr[0];
    suff[n-1] = arr[n-1];

    forn(1,n)
    {
        pref[i] = pref[i-1] + arr[i];
    }

    for(int i=n-2;i>=0;i--)
    {
        suff[i] = suff[i+1] + arr[i];
    }
    
    for(int i=0;i<q;i++){
        ll l,r,k;
        cin>>l>>r>>k;

        l = l-1;
        r = r-1;
        ll sum = 0;
        if(l-1 >=0)
            sum += pref[l-1];
        if(r+1 < n)
            sum += suff[r+1];
        sum += k*(r-l+1);

        if(sum & 1)
        {
            yes;
        }
        else
            no;
    }
   }
    return 0;
}