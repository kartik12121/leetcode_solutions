class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int j=0;
        int count=0;
        for(int i=0;i<t.size();i++)
        {
            if(j==n)break;
            if(t[i]==s[j])
            {
                count++;
                j++;
            }
        }
        return count==n;
    }
};