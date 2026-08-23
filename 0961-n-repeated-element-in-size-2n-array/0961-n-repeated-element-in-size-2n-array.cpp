class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>count;
        for(int i:nums)
        {
            count[i]++;
            if(count[i]>1)return i;
        }
        return -1;
    }
};