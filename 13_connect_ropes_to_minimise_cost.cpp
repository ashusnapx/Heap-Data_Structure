int minCostRope(vector<int> ropes)
{
    priority_queue<int, vector < int>, greater < int>> minHeap;
    for (int i = 0; i < ropes.size(); i++)
    {
        minHeap.push(ropes[i]);
    }

    while (minHeap.size() >= 2)
    {
        int top = minHeap.top();
        minHeap.pop();
        int second = minHeap.top();
        minHeap.pop();
        int cost = 0;

        cost = cost + first + second;
        minHeap.push(first + second);
    }
    return cost;
}