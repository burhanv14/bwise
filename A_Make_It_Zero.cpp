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
        ll n;
        cin>>n;
        vl arr(n);
        civ(arr);
        if(n%2==0)
        {
          cout<<"2"<<endl;
          cout<<"1 "<<n;
          eline;
          cout<<"1 "<<n;
          eline;
        }
        else
        {
          cout<<"4";
          eline;
          cout<<"1 "<<n;
          eline;
          cout<<"2 "<<n;
          eline;
          cout<<"1 "<<2;
          eline;
          cout<<"1 "<<2;
          eline;
        }
   }
    return 0;
}


