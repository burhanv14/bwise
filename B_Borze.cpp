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
//    cin>>t;
   while(t--){
        string s;
        cin>>s;
        int n= s.length();
        string num="";
        for(int i=0;i<n;i++)
        {
            if(s[i] == '-')
            {
                if(i+1 < n && s[i+1] == '.')
                    num += '1';
                else
                    num += '2';
                i++;
            }
            else
            {
                num += '0';
            }
        } 
        cout<<num;
        eline;
   }
    return 0;
}