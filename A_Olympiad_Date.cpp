//Code by Burhan Vora - 22ucc123@lnmiit.ac.in
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<long long,null_type,less<long long>,rb_tree_tag,tree_order_statistics_node_update> pbds;
//st.find_by_order(x) || st.order_of_key(x)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define civ(v) for(auto i=0;i<v.size();i++) cin>>v[i]
#define vi vector<int>
#define vl vector<long long>
#define usi unordered_set <int>
#define usll unordered_set <long long>
#define si set<int>
#define sll set<long long>
#define umii unordered_map <int,int>
#define mii map<int,int>
#define umll unordered_map <long long,long long>
#define mll map<long long,long long>
#define forn(s,n) for(auto i=s;i<n;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define con continue
#define eline cout<<"\n"
#define coutvec(arr) for(auto i=0;i<arr.size();i++) cout<<arr[i]<<" "
#define maxheap priority_queue <int> 
#define minheap priority_queue <int,vector<int>,greater<int>>
#define ppi pair<int,pair<int,int>>
#define pii pair<int,int>
#define pb emplace_back
#define all(x) x.begin(),x.end()

void solve()
{
    ll n;
    cin>>n;
    vl arr(n);
    civ(arr);
    
    vl freq(10,0);
    freq[0] = 3;
    freq[1] = 1;
    freq[3] = 1;
    freq[2] = 2;
    freq[5] = 1;

    forn(0,n){
        if(arr[i]==0 || arr[i]==1 || arr[i]==3 || arr[i]==2 || arr[i]==5)
            freq[arr[i]]--;

            bool check = true;
            for(int j=0;j<=9;j++)
            {
                if(freq[j] > 0)
                {
                    check = false;
                    break;
                }
            }
            if(check)
            {
                cout<<i+1;
                eline;
                return;
            }
    }
    cout<<0;
    eline;
}

int main()
{
  //fast;
  int t = 1;
  cin>>t;
  while(t--){
    solve();
  }
   return 0;
}

// //Code by Burhan Vora - 22ucc123@lnmiit.ac.in
// #include<bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// using namespace std;
// using namespace __gnu_pbds;
// typedef tree<long long,null_type,less<long long>,rb_tree_tag,tree_order_statistics_node_update> pbds;
// //st.find_by_order(x) || st.order_of_key(x)
// #define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #define ll long long
// #define civ(v) for(auto i=0;i<v.size();i++) cin>>v[i]
// #define vi vector<int>
// #define vl vector<long long>
// #define usi unordered_set <int>
// #define usll unordered_set <long long>
// #define si set<int>
// #define sll set<long long>
// #define umii unordered_map <int,int>
// #define mii map<int,int>
// #define umll unordered_map <long long,long long>
// #define mll map<long long,long long>
// #define forn(s,n) for(auto i=s;i<n;i++)
// #define yes cout<<"YES"<<endl
// #define no cout<<"NO"<<endl
// #define con continue
// #define eline cout<<"\n"
// #define coutvec(arr) for(auto i=0;i<arr.size();i++) cout<<arr[i]<<" "
// #define maxheap priority_queue <int> 
// #define minheap priority_queue <int,vector<int>,greater<int>>
// #define ppi pair<int,pair<int,int>>
// #define pii pair<int,int>
// #define pb emplace_back
// #define all(x) x.begin(),x.end()

// void solve()
// {
//     ll n;
//     cin>>n;
//     vl arr(n);
//     civ(arr);

//     vl mp(10,0);
//     mp[0] = 3;
//     mp[1] = 1;
//     mp[3] = 1;
//     mp[2] = 2;
//     mp[5] = 1;
//     forn(0,n)
//     {
//         if(arr[i] == 0 || arr[i] == 1 || arr[i] == 3 || arr[i] == 5
//             ||arr[i] == 2)
//             {    
//                 mp[arr[i]]--;
//             } 
//             bool f = true;
//             for(int j=0;i<=9;j++)
//             {
//                 if(mp[j] > 0)
//                 {
//                     f = false;
//                     break;
//                 }
//             }
//             if(f)
//             {
//                 cout<<i+1;
//                 eline;
//                 return;
//             }
//     }
//     cout<<0;
//     eline;
// }

// int main()
// {
//   //fast;
//   int t = 1;
//   cin>>t;
//   while(t--){
//     solve();
//   }
//    return 0;
// }