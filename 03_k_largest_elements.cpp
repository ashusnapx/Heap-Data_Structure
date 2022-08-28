#include <bits/stdc++.h>
using namespace std;
void kLargestElements(int *arr,int n,int k)
{
    priority_queue<int,vector<int>,greater<int>> minHeap;

    for(int i=0;i<n;i++)
    {
        minHeap.push(arr[i]);

        if(minHeap.size() > k)
        {
            minHeap.pop();
        }
    }

    while(minHeap.size()!=0)
    {
        cout<<minHeap.top()<<" ";
        minHeap.pop();
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
  cout<<kLargestElements(arr,n,3)<<endl;
}
/* 12 89 4 65 90 */
/* 4 12 65 89 90 */