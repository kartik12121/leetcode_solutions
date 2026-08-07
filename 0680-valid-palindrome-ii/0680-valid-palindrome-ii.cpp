class Solution {
public:
    bool pallindrome(string s,int left,int right)
    {
        while(left<right)
        {
            if(s[left]!=s[right])return false;
            left++;
            right--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int left=0;
        int right=s.length()-1;
        while(left<right)
        {
            if(s[left]!=s[right])
            {
             return pallindrome(s,left,right-1) || pallindrome(s,left+1,right);
            }
            left++;
            right--;
        }
        return true;
    }
};