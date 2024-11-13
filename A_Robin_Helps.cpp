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
    int n,k;
    cin>>n>>k;
    vi arr(n);
    civ(arr);
    int curr = 0;
    int give = 0;
    forn(0,n){
        if(arr[i]>=k)
            curr += arr[i];
        else if(arr[i]==0 && curr>0)
        {
            give++;
            curr--;
        }
    }    
    cout<<give;
    eline;
   }
    return 0;
}