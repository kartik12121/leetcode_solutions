class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        bool allzero=true;
        int txor=0;
        for(int num:nums)
        {
            txor^=num;
            if(num!=0)allzero=false;
        }
        if(allzero==true)return 0;
        if(txor!=0)return nums.size();
        return nums.size()-1;
    }
};