class Solution {
public:
    int majorityElement(vector<int>& nums) {
        long long maj=nums[0];
        long long count=0;
        int i=0;
        while(i<nums.size())
        {
            if(maj==nums[i])count++;
            else count--;
            if(count==0)
            {
                maj=nums[i];
                count++;
            }i++;
        }
        return maj;
    }
};