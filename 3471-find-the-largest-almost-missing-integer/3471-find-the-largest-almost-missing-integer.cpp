class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        if(k==nums.size())return *max_element(nums.begin(),nums.end());
        else if(k==1)
        {
            unordered_map<int,int>freq;
            for(int i=0;i<nums.size();i++)
            {
                freq[nums[i]]++;
            }
            int maxm=-1;
            for(auto &[num,count]:freq)
            {
                if(count==1)
                {
                    maxm=max(maxm,num);
                }
            }
            return maxm;
        }
            int a=0,n=nums.size();
            int b=0;
            for(int i=0;i<n;i++)
            {
                if(nums[i]==nums[0])a++;
                if(nums[i]==nums[n-1])b++;
            }
            int ans=-1;
            if(b==1) ans=max(nums[n-1],ans);
            if(a==1) ans=max(ans,nums[0]);
            return ans;
        
    }
};