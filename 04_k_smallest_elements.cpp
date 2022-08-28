#include <bits/stdc++.h>
using namespace std;
void kSmallestElements(int *arr,int n,int k)
{
    priority_queue<int> maxHeap;
    for(int i=0;i<n;i++)
    {
        maxHeap.push(arr[i]);
        if(maxHeap.size() > k)
        {
            maxHeap.pop();
        }
    }

    while(maxHeap.size()!=0)
    {
        cout<<maxHeap.top()<<" ";
        maxHeap.pop();
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
  cout<<kSmallestElements(arr,n,3)<<endl;
}
/* 12 89 4 65 90 */
/* 4 12 65 89 90 */