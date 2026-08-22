class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int maxlen=-1;
        vector<int>v(26,-1);
        for(int i=0;i<s.length();i++)
        {
            int curr=s[i]-'a';
            if(v[curr]==-1)v[curr]=i;
            else
            {
                maxlen=max(maxlen,i-v[curr]-1);
            }
        }
        return maxlen;
    }
};