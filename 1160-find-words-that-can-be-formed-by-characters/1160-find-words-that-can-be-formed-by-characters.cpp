class Solution {
    bool canform(string word,vector<int>counts)
    {
        vector<int>c(26,0);
        for(char ch:word)
        {
            c[ch-'a']++;
            if(c[ch-'a']>counts[ch-'a'])return false;
        }
        return true;
    }
public:
    int countCharacters(vector<string>& words, string chars) {
        int count=0;
        vector<int>counts(26,0);
        for(char ch:chars)
        {
            counts[ch-'a']++;
        }
        for(auto word:words)
        {
            if(canform(word,counts))
            {
                count+=word.length();
            }
        }
        return count;
    }
};