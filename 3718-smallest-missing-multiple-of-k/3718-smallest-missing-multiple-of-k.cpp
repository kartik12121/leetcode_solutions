class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int>x(nums.begin(),nums.end());
        int i=1;
        while(true)
        {
            if(x.find(k*i)==x.end())return k*i;
            i++;
        }
        return 0;
    }
};