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
    string s;
    cin>>s;
    int n = s.length();
    if(n <= 2)
    {
        no;
        con;
    }    
    if(s[0] !='1' || s[1]!='0')
    {
        no;
        con;
    }
    if(n==3 && s[2]<'2')
    {
        no;con;
    }
    if(n>3 && s[2]=='0')
    {
        no;
        con;
    }
    yes;
   }
    return 0;
}