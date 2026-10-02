class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        vector<int> target(26, 0);
        for (char c : licensePlate) {
            if (isalpha(c)) {
                target[tolower(c) - 'a']++;
            }
        }
        
        string ans = "";
        for (const string& w : words) {
            vector<int> current(26, 0);
            for (char c : w) {
                current[c - 'a']++;
            }
            
            bool ok = true;
            for (int i = 0; i < 26; i++) {
                if (current[i] < target[i]) {
                    ok = false;
                    break;
                }
            }
            
            if (ok) {
                if (ans == "" || w.length() < ans.length()) {
                    ans = w;
                }
            }
        }
        return ans;
    }
};
