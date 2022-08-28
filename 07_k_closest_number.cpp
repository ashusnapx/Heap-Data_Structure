#include <bits/stdc++.h>
using namespace std;

void kClosestNumbers(vector<int> num,int k,int x)
{
    /* lets take a array arr[5] = 5 6 7 8 9
        so, let k = 7 and x = 3
        so, closest numbers to 7 are 7 itself followed by 6 and then 8.

        first approach can be subtracting 7 from every number and then selecting the x minimum of them.

        eg. 5 6 7 8 9
          - 7 7 7 7 7
         ~~~~~~~~~~~~
            2 1 0 1 2 (absolute difference)
         ~~~~~~~~~~~~
     */

     priority_queue<pair<int,int>> maxH;
     for(int i=0;i<num.size();i++)
     {
        maxH.push({abs(num[i]-k),num[i]});

        if(maxH.size() > x)
        {
            maxH.pop();
        }
     }

     while(maxH.size()!=0)
     {
        cout<<maxH.top().second<<" ";
        maxH.pop();
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

    kClosestNumbers(arr,7,3);
}