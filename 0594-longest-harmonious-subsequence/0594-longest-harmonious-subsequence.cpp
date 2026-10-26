class Solution {
public:
    int findLHS(vector<int>& nums) {
        std::unordered_map<int, int> counts;
        int max_len = 0;
        
        for (int num : nums) {
            counts[num]++;
        }
        for (auto& [num, count] : counts) {
            if (counts.count(num + 1)) {
                max_len = std::max(max_len, count + counts[num + 1]);
            }
        }
        
        return max_len;
    }
};