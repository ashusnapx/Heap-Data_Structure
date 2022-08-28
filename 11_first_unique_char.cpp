#include <bits/stdc++.h>
using namespace std;
string firstUniqChar(string s)
{
    map<char, int> mp;
    for (auto it: s)
    {
        mp[it]++;
    }

    priority_queue<pair<int, char>> pq;
    for (auto it: mp)
    {
        pq.push({ it.second,
            it.first });

        while (pq.size() > 1)
        {
            pq.pop();
        }
    }

    return pq.top().second;
}

int main()
{
    string s = "hello";
    cout<<firstUniqChar(s)<<endl;
}