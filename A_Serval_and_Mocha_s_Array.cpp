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

int gcd(int n,int m)
{
    while(m > 0)
    {
        int r = n%m;
        n = m;
        m = r;
    }
    return n;

}

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
    if(n==1)
    {
        yes;con;
    }
    bool f = false;
    forn(0,n){
        for(int j=0;j<n;j++){
            if(i!=j && gcd(arr[i],arr[j])<=2)
            {
                f = true;
                break;
            }
        }
    }
    if(f)
    {
        yes;con;
    }
    no;
   }
    return 0;
}   