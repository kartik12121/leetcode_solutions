class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr(nums1.size(), -1);
        int i = 0;
        while (i < nums1.size()) {
            auto j = find(nums2.begin(), nums2.end(), nums1[i]);
            while (j != nums2.end()) {
                if (*j > nums1[i]) {
                    arr[i] = *j;
                    break;
                }
                j++;
            }
            i++;
        }
        return arr;
    }
};
