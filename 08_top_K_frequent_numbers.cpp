#include <bits/stdc++.h>
using namespace std;
/* top camn also be asked as greatest and largest */
void top_K_frequentNumbers(vector<int> v,int k)
{
    unordered_map<int,int> mp;
    for(int i = 0; i < v.size() ; i++)
    {
        mp[v[i]]++;
    }

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minHeap;

    for(auto i=mp.begin();i!=mp.end();i++)
    {
        minHeap.push({i->second,i->first});

        if(minHeap.size() > k)
        {
            minHeap.pop();
        }
    }
    while(minHeap.size()!=0)
    {
        cout<<minHeap.top().second<<" ";
        minHeap.pop();
    }
    // priority_queue<int,vector<int>,greater<int>> q;
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

    top_K_frequentNumbers(arr,2);
}

/* LEETCODE QUEST - 347 */
class Solution
{
    public:
        vector<int> topKFrequent(vector<int> &nums, int k)
        {
           	//step1 - create a frequency map
            unordered_map<int, int> mp;
            for (int i = 0; i < nums.size(); i++)
            {
                mp[nums[i]]++;
            }

           	//step2 - create a min heap
            priority_queue<pair<int, int>, vector< pair<int, int>>, greater<pair<int, int>>> mh;

            for (auto i = mp.begin(); i != mp.end(); i++)
            {
                mh.push({ i->second,
                    i->first });

                if (mh.size() > k)
                {
                    mh.pop();
                }
            }
            vector<int> ans;
            while (mh.size() != 0)
            {
                ans.push_back(mh.top().second);
                mh.pop();
            }

            return ans;
        }
};