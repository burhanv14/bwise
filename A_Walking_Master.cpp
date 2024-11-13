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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int moves = 0;
    if(a==c && b==d)
    {
        cout<<moves;
        eline;
        con;
    }
    else{
        if(d < b)
        {
            cout<<"-1";eline;con;
        }
        else
        {
            moves += d-b;
            b = d;
            a = a + moves;
            if(c > a)
            {
                cout<<"-1";eline;con;
            }
            else{
                moves += a - c;
                cout<<moves;
                eline;con;
            }
        }
        
    }    
   }
    return 0;
}