class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>res;
        int b,n=nums.size(); 
        if(n==0)return res;
        int a=nums[0];
        for(int i=1;i<n;i++)
        {
            if(nums[i]!=nums[i-1]+1)
            {
                b=nums[i-1];
                if(a!=b) res.push_back(to_string(a)+"->"+to_string(b));
                else res.push_back(to_string(a));
                a=nums[i];
            }
        }
        if(a!=nums[n-1])res.push_back(to_string(a)+"->"+to_string(nums[n-1]));
        else res.push_back(to_string(a));
        return res;
    }
};