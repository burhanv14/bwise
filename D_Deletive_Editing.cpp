// Code by Burhanuddin Vora - 22ucc123@lnmiit.ac.in
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
#define eline cout<<endl
#define coutvec(arr,j,n) for(int i=j;i<n;i++) cout<<arr[i]<<" "
#define inputn ll n;cin>>n;
#define maxheap priority_queue<int> 
#define minheap priority_queue<int, vector<int>, greater<int>>
#define ppi pair<int, pair<int, int>>

void solve() {   
    string s;
    getline(cin, s); // Read the entire line to handle spaces in the input
    string s1 = "", s2 = "";
    ll n = s.length();
    bool f = false;

    // Split the input into s1 and s2 at the first space
    for (int i = 0; i < n; i++) {
        if (s[i] == ' ') {
            f = true;
            continue;
        }
        if (f)
            s2 += s[i];
        else
            s1 += s[i];
    }

    ll n1 = s1.length();
    ll n2 = s2.length();

    unordered_map<char, stack<int>> mp;

    // Create a map with the indices of each character in s1
    for (int i = 0; i < n1; i++) {
        mp[s1[i]].push(i);
    }

    ll rp = n2 - 1;
    f = true;

    // Check if s2 can be a subsequence of s1
    for (int lp = n1 - 1; lp >= 0; lp--) {
        if (rp < 0)
            break;
        if (s1[lp] == s2[rp]) {
            if (mp[s1[lp]].top() > lp) {
                f = false;
                break;
            } else {
                rp--;
                mp[s1[lp]].pop();
            }
        }
    }

    if (!f || rp >= 0)
        no;
    else
        yes;
}

int main() {
    fast;
    int t;
    cin >> t;
    cin.ignore(); 
    while (t--) {
        solve();
    }
    return 0;
}
