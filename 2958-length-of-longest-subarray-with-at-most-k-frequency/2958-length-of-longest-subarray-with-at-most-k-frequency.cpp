class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int left=0;
        int right=0;
        unordered_map<int,int>freq;
        int maxcount=INT_MIN;
        while(right<nums.size())
        {
            freq[nums[right]]++;
            while(freq[nums[right]]>k)
            {
                freq[nums[left]]--;
                left++;
            }
            right++;
            maxcount=max(maxcount,right-left);
        }
        return maxcount;
    }
};