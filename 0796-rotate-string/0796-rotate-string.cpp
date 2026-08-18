class Solution {
public:
    bool rotateString(string s, string goal) {
        string str=goal+goal;
        return str.contains(s);
    }
};