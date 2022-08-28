#include <bits/stdc++.h>
using namespace std;

int KthSmallest(int *arr,int n,int k)
{
  priority_queue<int> maxH;

  // step2 - traverse the array
  for(int i=0;i<n;i++)
  {
    maxH.push(arr[i]);

    if(maxH.size()>k)
    {
      maxH.pop();
    }
  }

  return maxH.top();
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
  cout<<KthSmallest(arr,n,3)<<endl;
}
/* 12 89 4 65 90 */
/* 4 12 65 89 90 */