class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string str(s.length(),' ');
        for(auto i:indices)
        {
            str[indices[i]]=s[i];
        }
        return str;
    }
};