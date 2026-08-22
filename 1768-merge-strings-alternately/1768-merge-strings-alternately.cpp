class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str="";
        int i=0;
        int j=0;
        while(i<word1.length() && word2.length()>j)
        {
            str.push_back(word1[i++]);
            str.push_back(word2[j++]);
        }
        while(i<word1.length())
        {
            str.push_back(word1[i++]);
        }
        while(j<word2.length())
        {
            str.push_back(word2[j++]);
        }
        return str;
    }
};