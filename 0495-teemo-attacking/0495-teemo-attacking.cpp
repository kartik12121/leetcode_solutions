class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int totaltime=0;
        if(timeSeries.empty() || duration==0)return 0;
        for(int i=0;i<timeSeries.size()-1;i++)
        {
            totaltime+=min(timeSeries[i+1]-timeSeries[i],duration);
        }
        return totaltime+duration;
    }
};