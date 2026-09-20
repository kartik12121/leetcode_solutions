class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0;i<s.length();i++)
        {
            int rev=s[i]-'a';
            rev=abs(rev-26);
            sum+=rev*(i+1);
        }
        return sum;
    }
};