class Solution {
public:
    int minpair(vector<int> &nums)
    {
        int pos=-1;
        int minm=INT_MAX;
        for(int i=0;i<nums.size()-1;i++)
        {
            int sum=nums[i]+nums[i+1];
            if(sum<minm)
            {
                minm=sum;
                pos=i;
            }
        }
        return pos;
    }
    void mergepair(vector<int>&nums,int p)
    {
        nums[p]=nums[p]+nums[p+1];
        nums.erase(nums.begin()+p+1);
    }
    int minimumPairRemoval(vector<int>& nums) {
        int a=0;
        while(!is_sorted(nums.begin(),nums.end()))
        {
            mergepair(nums,minpair(nums));
            a++;
        }
        return a;
    }
};