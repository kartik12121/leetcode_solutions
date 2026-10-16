class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        for(auto i:s)
        {
            mp[i]++;
        }
        int count=0;
        int found=0;
        for(auto i:mp)
        {
            if(i.second%2==0)count+=i.second;
            else {
                count+=i.second-1;
                found=1;
            }
        }
        return count+found;

    }

};