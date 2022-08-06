#include<queue>
vector<int> minHeap(int n, vector<vector<int>>& q) {
    priority_queue<int,vector<int>,greater<int>> pq;
//     int n = q.size
    vector<int> ret;
    for(int i=0;i<n;i++)
    {
        if(q[i].size() == 2)
        {
            pq.push(q[i][1]);
        }
        else{
            ret.push_back(pq.top());
            pq.pop();
        }
    }
    return ret;
    
    
}
