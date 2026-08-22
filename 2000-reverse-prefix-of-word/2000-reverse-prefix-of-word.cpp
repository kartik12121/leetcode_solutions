class Solution {
public:
    string reversePrefix(string word, char ch) {
        for(int i=0;i<word.size();i++)
        {
            if(word[i]==ch)
            {
                int j=0;
                while(i>j)
                {
                    swap(word[j],word[i]);
                    i--;
                    j++;
                }
                return word;
            }
        }
        return word;
    }
};