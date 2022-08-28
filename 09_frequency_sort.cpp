#include <bits/stdc++.h>
using namespace std;

void frequencySort(vector<int> v)
{
    /* create a hashmap to store frequency */
    unordered_map<int,int> mp;
    for(int i=0;i<v.size();i++)
    {
        mp[v[i]]++; // pehle number, then uski frequency
    }

    /* create a max heap */
    priority_queue<pair<int,int>> maxHeap;

    for(auto i=mp.begin();i!=mp.end();i++)
    {
        maxHeap.push({i->second,i->first});
    }

    while(maxHeap.size()!=0)
    {
        int freq = maxHeap.top().first;
        int valu = maxHeap.top().second;

        for(int i=1;i<=freq;i++)
        {
            cout<<v[i]<<" ";
        }
        maxHeap.pop();
    }
}
int main()
{   int n;
    cin>>n;

    vector<int> arr;
    for(int i=0;i<n;i++) {
        int val;
        cin >> val;
        arr.push_back(val);
    }

    frequencySort(arr);
}