class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> d = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
        unordered_set<string>s;
        for(auto word:words)
        {
            string code;
            for(auto i:word) code+=d[i-'a'];
            s.insert(code);
        }
        return s.size();
    }
};