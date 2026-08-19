class Solution {
public:
    bool detectCapitalUse(string word) {
        int upper=0;
        int lower=0;
        for(auto i:word)
        {
            if(isupper(i))
            {
                upper++;
            }
            else lower++;
        }
        if(upper==word.length() || lower==word.length())return true;
        if(lower==word.length()-1 && isupper(word[0]))return true;
        return false;
    }
};