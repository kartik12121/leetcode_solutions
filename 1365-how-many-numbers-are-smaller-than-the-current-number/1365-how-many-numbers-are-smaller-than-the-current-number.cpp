class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map<int,int>result;
        for(int i=0;i<nums.size();i++)++result[nums[i]];
        int current=0;
        for(auto &i:result)
        {
            int temp=i.second;
            i.second=current;
            current+=temp;
        }
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=result[nums[i]];
        }
        return nums;
    }
};