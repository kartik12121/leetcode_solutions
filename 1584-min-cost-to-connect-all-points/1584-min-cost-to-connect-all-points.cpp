class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
          vector<int>visited(points.size(),0);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    pq.push({0,0});
    int sum=0;
    while(!pq.empty())
    {
        auto curr=pq.top();
        pq.pop();
        int wt=curr.first;
        int currentnode=curr.second;
        if(!visited[currentnode])
        {
            visited[currentnode]=1;
            sum+=wt;
            for(int next=0;next<points.size();next++)
            {
                int weight= abs(points[currentnode][0] - points[next][0]) + 
                               abs(points[currentnode][1] - points[next][1]);
                               pq.push({weight,next});
        }}}
        return sum;
    }
};