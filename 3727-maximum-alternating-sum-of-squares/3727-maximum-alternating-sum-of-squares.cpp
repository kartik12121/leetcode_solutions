class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        long long sum=0;
        int i=0;
        while(i<(n/2))
        {
            sum-=nums[i];i++;
        }
        while(i<n)
        {
            sum+=nums[i];i++;
        }
        return sum;
    }
};