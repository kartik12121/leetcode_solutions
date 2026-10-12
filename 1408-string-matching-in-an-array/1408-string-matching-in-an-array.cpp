class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string>ans;
        int n=words.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    if(words[j].contains(words[i]))
                    {
                        if(find(ans.begin(),ans.end(),words[i])==ans.end())
                        ans.push_back(words[i]);
                    }
                }
            }
        }
        return ans;
    }
};