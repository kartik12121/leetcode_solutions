class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
       int i=0;
       int n=nums.size();
       int j=1;
        while(i<n &&j<n)
        {
            if(nums[i]%2!=0 && nums[j]%2==0)
            {
                swap(nums[i],nums[j]);
                j+=2;
                i+=2;
            }
            else if(nums[i]%2==0)i+=2;
            else if(nums[j]%2!=0)j+=2;
        }
        return nums;
    }
};