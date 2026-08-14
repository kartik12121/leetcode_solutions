class Solution {
public:
    int maximumLengthSubstring(string s) {
        int left=0;
        int right=0;
        int maxcount=INT_MIN;
        int count=0;
        unordered_map<int,int>freq;
        while(right<s.length())
        {
            freq[s[right]]++;
            count++;
            while(freq[s[right]]>2)
            {
                freq[s[left]]--;
                left++;
                count--;
            }
            maxcount=max(maxcount,count);
            right++;
        }
        return maxcount;
    }
};