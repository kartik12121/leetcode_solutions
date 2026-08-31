class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxm=INT_MIN;
        for(auto i:accounts)
        {
            int sum=0;
            for(auto j:i) sum+=j;
            maxm=max(maxm,sum);
        }
        return maxm;
    }
};