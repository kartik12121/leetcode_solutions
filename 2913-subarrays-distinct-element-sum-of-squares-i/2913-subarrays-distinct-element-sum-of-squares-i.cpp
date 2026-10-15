class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int res=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            unordered_set<int>hash;
            for(int j=i;j<n;j++)
            {
                hash.insert(nums[j]);
                int d=hash.size();
                res+=d*d;
            }
        }
        return res;
    }
};