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
        string s;
        cin>>s;
        char ch=s[0];
        int maxm = 0;
        int curr = 1;
        for(int i=1;i<n;i++)
        {
            char chcurr = s[i];
            if(ch == chcurr)
            {
                curr++;
            }
            else
            {
                ch = s[i];
                curr = 1;
            }
            maxm = max(maxm,curr);
        }
        maxm = max(maxm,curr);
        cout<<maxm+1;
        eline;
   }
    return 0;
}