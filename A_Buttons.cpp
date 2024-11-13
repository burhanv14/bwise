#include<bits/stdc++.h>
using namespace std;
//#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define civ for(int i=0;i<n;i++) cin>>v[i];


int main()
{
   //fast;
   int t = 1;
   cin>>t;
   while(t--){
     ll a,b,c;
    cin>>a>>b>>c;
    if(c>0 && c%2 != 0)
        a++;
    if(a > b)
        cout<<"First"<<endl;
    else
        cout<<"Second"<<endl;    
   }
    return 0;
}