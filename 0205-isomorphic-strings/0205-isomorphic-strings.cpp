class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length())return false;
        unordered_map<char,char>mp;
        unordered_set<char>visited;
        string a="";
        for(int i=0;i<s.length();i++)
        {
            if(mp.find(s[i])==mp.end())
            {
                if(visited.count(t[i]))return false;
                mp[s[i]]=t[i];
                a+=t[i];
                visited.insert(t[i]);
            }
            else
            {
                a+=mp[s[i]];
            }
        }
        return t==a;
    }
};