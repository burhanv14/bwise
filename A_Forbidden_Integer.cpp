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
   while(t--)
   {
     int n,k,x;
     cin>>n>>k>>x;
     vi ans;
     if(x!=1)
     {
        ans = vi(n,1);
        n = 0;
     }
     else if((n & 1)== 0 && k>=2){
        ans = vi(n/2,2);
        n = 0;
     }
     else if(k>=3){ 
        ans = vi(n/2-1,2);
        ans.insert(ans.begin(),3);
        n = 0;
    }
    else  
        no;        
    if(n == 0){
        yes;
        cout<<ans.size()<<endl;
        forn(0,ans.size()){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
     }
    }    
    return 0;
}