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
    ll ce = 0;
    // ll co = 0;
    forn(0,n){
        if(!(arr[i]&1))
            ce++;
    }
    ll cure=0;
    // ll curro=0;
    int i = 0;
    bool f = false;
    for(i=0;i<n;i++){
        if(arr[i] == 2)
            cure++;
        // else
        //     curro++;
        if(ce-cure == cure)
        {
            f = true;
            break;
        }
    }
    if(f)
    {
        cout<<i+1;
        eline;
    }
    else
    {
        cout<<"-1";
        eline;
    }
   }
    return 0;
}