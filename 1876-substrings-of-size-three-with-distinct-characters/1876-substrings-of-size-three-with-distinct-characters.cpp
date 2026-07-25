class Solution {
public:
    int countGoodSubstrings(string s) {
        int left=0;
        int right=0;
        int count=0;
        map<int,int>mp;
        while(right<s.length())
        {
            mp[s[right]]++;
            while(mp[s[right]]>1 || mp.size()>3)
            {
                mp[s[left]]--;
                if(mp[s[left]]==0)mp.erase(s[left]);
                left++;
            }
            if(mp.size()==3)
            {
                count++;
            }
            right++;
        }
        return count;
    }
};