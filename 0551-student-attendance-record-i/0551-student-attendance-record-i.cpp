class Solution {
public:
    bool checkRecord(string s) {
       int late=0;
       int absent=0;
       for(int i=0;i<s.length();i++)
       {
        if(s[i]=='A')
        {
            absent++;
            if(absent>=2)return false;
        }
        else if(s[i]=='L')
        {
            late++;
            if(late>=3 && s[i-1]=='L' && s[i-2]=='L')return false;
        }
       }
       return true; 
    }
};