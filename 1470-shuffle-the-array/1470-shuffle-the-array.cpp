class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>nums2(2*n,0);
        int i=0;
        int j=n;
        bool flip=true;
        for(int k=0;k<2*n;k++)
        {
            if(flip==true) nums2[k]=nums[i++];
            else nums2[k]=nums[j++];
            flip=!flip;
        }
        return nums2;
    }
};