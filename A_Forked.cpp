// Code by Burhanuddin Vora
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
#define int long long

// Function to hash a pair of integers
signed main()
{
   //fast;
   int t = 1;
   cin >> t;
	while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        long xk, yk; scanf("%ld %ld", &xk,&yk);
        long xq, yq; scanf("%ld %ld", &xq,&yq);

        std::set<std::pair<long, long> > s,t;
        s.insert(std::make_pair(xk + a, yk + b));
        s.insert(std::make_pair(xk - a, yk + b));
        s.insert(std::make_pair(xk + a, yk - b));
        s.insert(std::make_pair(xk - a, yk - b));
        s.insert(std::make_pair(xk + b, yk + a));
        s.insert(std::make_pair(xk - b, yk + a));
        s.insert(std::make_pair(xk + b, yk - a));
        s.insert(std::make_pair(xk - b, yk - a));

        t.insert(std::make_pair(xq + a, yq + b));
        t.insert(std::make_pair(xq - a, yq + b));
        t.insert(std::make_pair(xq + a, yq - b));
        t.insert(std::make_pair(xq - a, yq - b));
        t.insert(std::make_pair(xq + b, yq + a));
        t.insert(std::make_pair(xq - b, yq + a));
        t.insert(std::make_pair(xq + b, yq - a));
        t.insert(std::make_pair(xq - b, yq - a));


        long cnt(0);
        for(std::set<std::pair<long, long> >::iterator it = s.begin(); it != s.end(); it++){cnt += t.count(*it);}
        printf("%ld\n", cnt);
	}
   return 0;
}
