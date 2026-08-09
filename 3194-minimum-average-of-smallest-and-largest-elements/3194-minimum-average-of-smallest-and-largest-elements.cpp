class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        double avg=INT_MAX;
        int i=0;
        int j=nums.size()-1;
        while(i<j)
        {
            double current=(nums[i]+nums[j])/2.0;
            avg=min(avg,current);
            i++;
            j--;
        }
        return avg;
    }
};