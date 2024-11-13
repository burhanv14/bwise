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
#define con continue

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
    int cm=0,cp=0;
    forn(0,n){
        if(arr[i] < 0)
            cm++;
        else
            cp++;
    }
    cm = cm * -1;
    if(cm+cp >=0 && (cm & 1)==0)
    {
        cout<<"0"<<endl;
        con;
    }
    int ops = 0;
    if(cm + cp < 0){
        int req  = abs(cm + cp);
        ops = ops + ceil((double)req/2);
        cp = cp + ceil((double)req/2);
        cm = cm + ceil((double)req/2);
    }   
    if(abs(cm)%2!=0)
        ops++;
    cout<<ops<<endl;
   }
    return 0;
}