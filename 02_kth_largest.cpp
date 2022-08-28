#include <bits/stdc++.h>
using namespace std;
int KthLargest(int *arr,int n,int k)
{
    // step1 - create a min heap
    priority_queue<int,vector<int>,greater<int>> minHeap;

    // step2 - traverse the array
    for(int i=0;i<n;i++)
    {
        // step3 - insert the value of array in queue
        minHeap.push(arr[i]);

        // step4 - check size of queue in realtime
        if(minHeap.size() > k)
        {
            minHeap.pop();
        }

        return minHeap.top();
    }
}
int main()
{
  int n;
  cin>>n;
  int *arr = new int[n];
  for(int i=0;i<n;i++) 
  {
    cin>>arr[i];
  }
  cout<<KthLargest(arr,n,4)<<endl;
  return 0;
}

/* LEETCODE 215 */
class Solution
{
    public:
        int findKthLargest(vector<int> &nums, int k)
        {
            priority_queue<int, vector < int>, greater < int>> minH;

            for (int i = 0; i < nums.size(); i++)
            {
                minH.push(nums[i]);

                if (minH.size() > k)
                {
                    minH.pop();
                }
            }

            return minH.top();
        }
};