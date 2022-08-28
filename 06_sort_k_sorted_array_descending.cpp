#include <bits/stdc++.h>
using namespace std;

vector<int> nearlySorted(vector<int> arr,int k)
{
    // step1 - create a min heap
    priority_queue<int,vector<int>,greater<int>> q;

    // step2 - create a resultant vector
    vector<int> ans;

    // step3 - traverse through vector
    for(int i = 0;i < arr.size(); i++)
    {
        // step4 - push until size of priority queue < k
        q.push(arr[i]);

        // step5 - immediately when the size of heap > k, put top in vector
        if(q.size()>k)
        {
            ans.push_back(q.top());
            q.pop();
        }
    }

    while(!q.empty())
    {
        ans.push_back(q.top());
        q.pop();
    }

    return ans;
}
int main()
{
    int n;
    cin>>n;

    vector<int> arr;
    for(int i=0;i<n;i++) {
        int val;
        cin >> val;
        arr.push_back(val);
    }

    vector<int> ok = nearlySorted(arr,3);
    reverse(ok.begin(),ok.end());
    for(int i=0;i<n;i++) {
        cout<<ok[i]<<" ";
    }
}