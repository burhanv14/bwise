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
    int n;
    cin>>n;
    vi v(n);
    civ(v);
    int curr = 0 ;
    int maxCur = 0;
    forn(0,n){
        if(v[i] == 1)
        {
            curr = 0;
        }
        else{
            curr++;
            if(curr > maxCur){
                maxCur = curr;
            }
        }
    }
    cout<<maxCur<<endl;     
  }
    return 0;
}