#include <bits/stdc++.h>
using namespace std;

int KthSmallest(vector<int> v, int k)
{
    priority_queue<int> maxHeap;
    for (int i = 0; i < v.size(); i++)
    {
        maxHeap.push(v[i]);
        while (maxHeap.size() > k)
        {
            maxHeap.pop();
        }
    }
    return maxHeap.top();
}

int sumOfElements(vector<int> v, int k1, int k2)
{
    return KthSmallest(v, k1) + KthSmallest(v, k2);
}
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        v.push_back(val);
    }
    cout<<sumOfElements(v,3,6)<<endl;
}

/* 1 3 5 11 12 15
3rd -> 5
6th -> 15
sum = 20 */