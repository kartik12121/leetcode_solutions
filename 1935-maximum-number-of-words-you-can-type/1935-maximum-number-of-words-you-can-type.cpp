class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int type=true;
        int result=0;
        for(int i=0;i<text.size();i++)
        {
            if(text[i]==' ')
            {
                if(type==true)result++;
                else type=true;
            }
            if(brokenLetters.contains(text[i]))type=false;
        }
        if(type==true)result++;
        return result;
    }
};