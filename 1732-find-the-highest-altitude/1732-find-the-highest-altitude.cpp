class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxsum=0;
        int currsum=0;
        for(int i:gain)
        {
            currsum+=i;
            maxsum=max(maxsum,currsum);
        }
        return maxsum;
    }
};