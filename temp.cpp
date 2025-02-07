#include<bits/stdc++.h>

using namespace std;

int main() {
    // Read input
    int api_size;
    cin >> api_size;
    vector<int> api_times(api_size);
    for (int i = 0; i < api_size; i++) {
        cin >> api_times[i];
    }
    int applications;
    cin >> applications;

    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int i = 0; i < applications; i++) {
        minHeap.push(0);
    }

    sort(api_times.rbegin(), api_times.rend());

 
    for (int time : api_times) {
        int minTime = minHeap.top();
        minHeap.pop();
        minHeap.push(minTime + time);
    }


    int maxRuntime = 0;
    while (!minHeap.empty()) {
        maxRuntime = max(maxRuntime, minHeap.top());
        minHeap.pop();
    }


    cout << maxRuntime << endl;
return 0;
}