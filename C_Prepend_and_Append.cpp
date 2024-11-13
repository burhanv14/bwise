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
    string s;
    cin>>s;
    int i = 0;
    while(i<n/2)
    {
        int a = s[i]-'0';
        int b = s[n-i-1]-'0';
        if(a^b==0)
            break;
        i++;
    }
    cout<<(n-2*i);
    eline;
   }
    return 0;
}