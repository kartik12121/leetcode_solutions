class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<score.size();i++)
        {
            pq.push({score[i],i});
        }
        vector<string>result(score.size());
        int rank=1;
        while(!pq.empty())
        {
            auto i=pq.top();
            if(rank==1)
            {
                result[i.second]="Gold Medal";
            }
            else if(rank==2)
            {
                result[i.second]="Silver Medal";
            }
            else if(rank==3)
            {
                result[i.second]="Bronze Medal";
            }
            else
            {
                result[i.second]=to_string(rank);
            }
            rank++;
            pq.pop();

        }
        return result;
    }
};