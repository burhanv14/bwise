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
   while(t--){
    int x,k;
    cin>>x>>k;
    if(x%k != 0)
    {
        cout<<"1"<<endl<<x<<endl;
        continue;
    }   
    int goal = x;
    int miniLeft;
    for(int i=goal-1;i>=1;i--){
        if(i%k!=0){
            if((goal - i)%k != 0)
            {
                miniLeft = i;
                break;
            }
        }
    }
    int miniRight;
    
    for(int i=goal+1;i<=100;i++){
        if(i%k!=0){
            if((i - goal)%k != 0)
            {
                miniRight = i;
                break;
            }
        }
    }

    if(miniLeft > 0){
        cout<<"2"<<endl;
        cout<<miniLeft<<" "<<goal-miniLeft<<endl;
    }
    else if(miniRight > 0)
    {
        cout<<"2"<<endl;
        cout<<miniRight<<" "<<"-"<<miniRight-goal<<endl;
    }
   }
    return 0;
}