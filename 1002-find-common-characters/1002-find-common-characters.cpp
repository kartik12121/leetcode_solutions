class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int>mincount(26,0);
        for(char ch:words[0])
        {
            mincount[ch-'a']++;
        }
        for(int i=1;i<words.size();i++)
        {
            vector<int>count(26,0);
            for(auto ch:words[i])
            {
                count[ch-'a']++;
            }
            for(int i=0;i<mincount.size();i++)
            {
                mincount[i]=min(mincount[i],count[i]);
            }
        }
        vector<string>result;
        for(int i=0;i<mincount.size();i++)
        {
            while(mincount[i]>0)
            {
                result.push_back(string(1,i+'a'));
                mincount[i]--;
            }

        }
        return result;
    }
};