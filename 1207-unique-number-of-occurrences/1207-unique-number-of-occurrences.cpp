class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;
        for( int i:arr)
        {
            mp[i]++;
        }
        unordered_set<int> unique_counts;
        for (auto const& [key, val] : mp) {
            unique_counts.insert(val);
        }
        if(mp.size()!=unique_counts.size())return false;
        return true;
    }
};