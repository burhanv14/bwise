#include<bits/stdc++.h>
using namespace std;
//#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
   //fast;
   int t = 1;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector <int> ans;
    for(int i=0;i<n-1;i++){
        if(arr[i] <= arr[i+1])
            ans.push_back(arr[i]);
        else{
            ans.push_back(arr[i]);
            ans.push_back(arr[i+1]-1>0?arr[i+1]-1:1);
        }
    }
    ans.push_back(arr[n-1]);
    cout<<ans.size()<<endl;
    for(auto ele : ans){
        cout<<ele<<" ";
    }
    cout<<endl;
   }
    return 0;
}