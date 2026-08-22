class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int contain=0;
        for(auto i:patterns)
        {
            if(word.contains(i))contain++;
        }
        return contain;
    }
};