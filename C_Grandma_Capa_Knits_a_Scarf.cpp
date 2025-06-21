//Code by Burhan Vora - 22ucc123@lnmiit.ac.in
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
//st.find_by_order(x) || st.order_of_key(x)
typedef                   tree<long long,null_type,less<long long>,rb_tree_tag,tree_order_statistics_node_update> pbds;
#define fast              ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll                long long
#define civ(v)            for(auto i=0;i<v.size();i++) cin>>v[i]
#define vi                vector<int>
#define vl                vector<long long>
#define usi               unordered_set <int>
#define usll              unordered_set <long long>
#define si                set<int>
#define sll               set<long long>
#define umii              unordered_map <int,int>
#define mii               map<int,int>
#define umll              unordered_map <long long,long long>
#define mll               map<long long,long long>
#define forn(s,n)         for(auto i=s;i<n;i++)
#define yes               cout<<"YES"<<endl
#define no                cout<<"NO"<<endl
#define con               continue
#define eline             cout<<"\n"
#define coutvec(arr)      for(auto i=0;i<arr.size();i++) cout<<arr[i]<<" "
#define maxheap           priority_queue <int> 
#define minheap           priority_queue <int,vector<int>,greater<int>>
#define ppi               pair<int,pair<int,int>>
#define pll               pair<long long,long long>
#define pii               pair<int,int>
#define pb                emplace_back
#define all(x)            x.begin(),x.end()

int check(char ch,string &s){
    int lp =0;
    int rp = s.length() -1;

    int count = 0;
    while(lp < rp){
        if(s[lp] == s[rp]){
            lp++;
            rp--;
        }else{
            if(s[lp] == ch)
                lp++;
            else if(s[rp] == ch)
                rp--;
            else
                return INT_MAX;
            count++;
        }
    }

    return count;
}

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    int lp = 0;
    int rp = n-1;
    char ch1='$',ch2='$';

    while(lp < rp){
        if(s[lp] == s[rp]){
            lp++;
            rp--;
        }else{
            ch1 = s[lp];
            ch2 = s[rp];
            break;
        }
    }

    if(ch1 == '$' && ch2=='$'){
        cout<<0;
        eline;
        return;
    }

    int no1 = check(ch1,s);
    int no2 = check(ch2,s);

    if(no1==INT_MAX && no2==INT_MAX){
        cout<<-1;
        eline;
        return;
    }else{
        cout<<min(no1,no2);
        eline;
        return;
    }
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